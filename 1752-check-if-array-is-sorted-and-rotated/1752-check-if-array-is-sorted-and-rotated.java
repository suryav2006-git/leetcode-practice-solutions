class Solution {
    public boolean check(int[] nums) {
        int n = nums.length;
        if(n==1) return true;

        int pos = 1;
        while(pos<n && nums[pos] >= nums[pos-1] ) {
            pos = pos + 1;
        } 

        if (pos == n) return true;
        if (nums[pos] > nums[0] ) return false;
        

        pos = pos + 1;

        while(pos<n && nums[pos] <= nums[0] && nums[pos]>= nums[pos-1]) {
            pos = pos + 1;
        }
        return pos == n;
    }
}