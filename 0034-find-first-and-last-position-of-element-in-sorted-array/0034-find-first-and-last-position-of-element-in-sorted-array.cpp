class Solution {
public:

    int FirstSearch(vector<int>& nums, int n , int target) {
        int first = -1;
        int low = 0;
        int high = n-1;

        while(low<=high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                first = mid;
                high = mid-1;
            }
            else if (nums[mid] >= target) {
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return first;
    }

    int SecondSearch( vector<int>& nums, int n, int target) {
        int second = -1;
        int low = 0;
        int high = n-1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                second = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return second;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1;
        int second = -1;

        first = FirstSearch(nums, n , target);
        if(first == -1) return { -1, -1} ;
        second = SecondSearch(nums, n , target);

        return {first,second};
    }
};