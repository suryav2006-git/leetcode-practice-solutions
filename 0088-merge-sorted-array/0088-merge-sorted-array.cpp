class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // Pointer for end of valid elements in nums1
        int j = n - 1;      // Pointer for end of nums2
        int k = m + n - 1;  // Pointer for insertion at the back of nums1

        // Move backwards, picking the larger element each time
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If nums2 still has leftover elements, copy them
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        // Leftover elements in nums1 are already in their correct places
    }
};
