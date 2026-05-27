class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n -1 ;

        while(start < end) {
            int total = nums[start] + nums[end];
            if( total == target) {
                return {start+1,end+1};
            }
            if(total<target) {
                start++ ;
            }
            if (total>target) {
                end--;
            }
        }   
        return {0,0};
    }
};