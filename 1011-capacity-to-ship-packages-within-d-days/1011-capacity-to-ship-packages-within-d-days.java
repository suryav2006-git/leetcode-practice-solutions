class Solution {

    public int maxof(int[] nums, int n) {
        int maxi = Integer.MIN_VALUE ;
        for(int i=0; i<n ; i++) {
            if(nums[i] > maxi) maxi = nums[i];
        }
        return maxi;
    }

    public int sumof(int[] nums, int n) {
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i];
        }
        return sum;
    }

    public int daysRequired(int[] weights, int capacity) {
        int n = weights.length;
        int load = 0;
        int days = 1;

        for(int i=0; i<n; i++) {
            if( load + weights[i] > capacity ) {
                days = days + 1;
                load = weights[i];
            }
            else load += weights[i];
        }
        return days;
    }

    public int shipWithinDays(int[] weights, int maxdays) {
        int n = weights.length;
        int low = maxof(weights,n);
        int high = sumof(weights,n);

        while(low<=high) {
            int mid = low + (high - low) / 2;
            int daysreq = daysRequired(weights, mid);

            if(daysreq <= maxdays) {
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
}