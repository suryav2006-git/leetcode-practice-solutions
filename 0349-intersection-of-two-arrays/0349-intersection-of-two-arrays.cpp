class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set ;

        for(int num : nums1) {
            set.insert(num);
        }

        vector<int> intersection;
        for(int num : nums2) {
            if(set.count(num)) {
                intersection.push_back(num);
                set.erase(num);
            }
        }
        return intersection;
    }
};