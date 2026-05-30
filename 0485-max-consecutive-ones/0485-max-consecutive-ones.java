class Solution {
    public int max(int a, int b) {
        if (a>=b) {
            return a;
        } 
        else {
            return b;
        }
    }

    public int findMaxConsecutiveOnes(int[] nums) {
        int maxi = 0;
        int count = 0;
        for(int i=0; i<nums.length ; i++) {
            if (nums[i]==1) {
                count++ ;
                maxi = max(count,maxi);
            }
            else {
                count = 0;
            }
        }
        return maxi;
    }
}