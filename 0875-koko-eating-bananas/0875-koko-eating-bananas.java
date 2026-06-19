class Solution {

    public int maxof(int[] piles) {
        int maxi = Integer.MIN_VALUE ;
        int n = piles.length;

        for(int i=0; i<n; i++) {
            if(piles[i] >= maxi) {
                maxi = piles[i];
            }
        }
        return maxi;
    }
    public long totalhrsof(int[] piles, int hour) {
        if(hour == 0) return Integer.MAX_VALUE ;
        
        long totalhrs = 0;
        int n = piles.length;

        for(int i=0; i<n ; i++) {
            totalhrs += Math.ceil( (double) piles[i] / hour);
        }
        return totalhrs;
    }
    public int minEatingSpeed(int[] piles, int hours) {
        int low = 0;
        int high = maxof(piles);

        while(low<=high) {
            int mid = low + (high - low) / 2;
            long totalhrs = totalhrsof(piles, mid);

            if(totalhrs <= hours) {
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
}