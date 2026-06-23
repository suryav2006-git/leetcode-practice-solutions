class Solution {

    public int maxof(int[] nums, int n) {
        int maxi = Integer.MIN_VALUE;

        for(int i=0; i<n; i++) {
            if(nums[i] > maxi) maxi = nums[i];
        }
        return maxi;
    }

    public int ispossible(int[] nums, int div) {
        int sum =0;
        int n = nums.length;

        for(int i=0; i<n ; i++) {
            sum += Math.ceil( (double) nums[i] / (double) div);
        }
        return sum;
    }

    public int smallestDivisor(int[] nums, int threshold) {
        int n = nums.length ;

        if(n > threshold) return -1;
        int low = 1;
        int high = maxof(nums, n);

        while(low<=high) {
            int mid = low + (high - low) / 2;

            if(ispossible(nums, mid) <= threshold) {
                high = mid - 1;
            }
            else low = mid+ 1;
        }
        return low;
    }
}