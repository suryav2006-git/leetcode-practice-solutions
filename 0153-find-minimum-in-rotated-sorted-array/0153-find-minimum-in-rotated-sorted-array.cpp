class Solution {
public:

    int minof(int a, int b) {
        if(a<=b) return a;
        else return b;
    }

    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mini = INT_MAX ;

        while(low<=high) {
            int mid = low + (high - low) / 2;

            if(nums[low] <= nums[mid]) {
                mini = minof(mini, nums[low]);
                low = mid+1;
            }
            else {
                mini = minof(nums[mid], mini);
                high = mid-1;
            }
        }
        return mini;
    }
};