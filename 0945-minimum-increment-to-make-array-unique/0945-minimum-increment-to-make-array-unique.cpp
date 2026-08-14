class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int count = 0;

        for(int i=1; i<n ; i++) {
            if(nums[i] <= nums[i-1]) {
                int newValue = nums[i-1] + 1;

                count += newValue - nums[i];
                nums[i] = newValue;
            }
        }
        return count;
    }
};