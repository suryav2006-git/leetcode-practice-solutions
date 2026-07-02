class Solution {
public:

    int maxof(vector<int>& piles) {
        int n = piles.size();
        int maxi = INT_MIN ;

        for(int i=0; i<n; i++) {
            if(piles[i] >= maxi) maxi = piles[i];
        }
        return maxi;
    }

    long long totalhrsof(vector<int>& piles, int hour) {
        if (hour == 0) return LLONG_MAX ;

        long long totalhrs = 0;
        int n = piles.size();

        for(int i=0; i<n ; i++) {
            totalhrs += ceil( (double) piles[i] / hour);
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int hours) {
        int low = 1;
        int high = maxof(piles);

        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long totalhrs = totalhrsof(piles,mid) ;

            if(totalhrs <= hours) {
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};