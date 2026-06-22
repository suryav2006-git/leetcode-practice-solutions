class Solution {

    public boolean ispossible(int[] nums, int day, int m, int k) {
        int n= nums.length;
        int count = 0;
        int noofbokke = 0;

        for(int i=0; i<n ; i++) {
            if(nums[i] <= day) count++ ;
            else{
                noofbokke += (count / k);
                count = 0;
            }
        }
        noofbokke += (count / k);
        return noofbokke >= m;
    }

    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;

        if( (long) m*k > n ) return -1;

        int mini = Integer.MAX_VALUE ;
        int maxi = Integer.MIN_VALUE ;

        for(int i=0; i<n ; i++) {
            if(bloomDay[i] > maxi) maxi = bloomDay[i];
            if(bloomDay[i] < mini) mini = bloomDay[i];
        }

        int low = mini;
        int high = maxi;

        while(low<=high) {
            int mid = low + (high -low) / 2;
            if(ispossible(bloomDay, mid, m, k)) {
                high = mid - 1;
            } else low = mid + 1;
        }
        return low;
    }
}