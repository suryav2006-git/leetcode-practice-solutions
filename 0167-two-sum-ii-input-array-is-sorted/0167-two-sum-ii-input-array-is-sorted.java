class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int i = 0;
        int j = n-1;

        while(i<=j) {
            int total = nums[i] + nums[j];

            if(total==target) {
                return new int[] { i+1 , j+1 };
            }
            else if(total<target) {
                i++ ;
            }
            else {
                j-- ;
            }
        }
        return new int[] {};
    }
}