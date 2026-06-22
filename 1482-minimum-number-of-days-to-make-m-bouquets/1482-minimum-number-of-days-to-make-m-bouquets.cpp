class Solution {
public:

    bool ispossible(vector<int>& nums, int day, int m, int k) {
        int count = 0;
        int noofbokke = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] <= day) count++;
            else {
                noofbokke += (count / k);
                count =0;
            }
        }
        noofbokke += (count / k);
        return noofbokke >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        if( (long long) m* k > n) return -1;

        int mini = INT_MAX ; 
        int maxi = INT_MIN ;
        for(int i=0; i<n; i++) {
            if(bloomDay[i] > maxi) maxi = bloomDay[i];
            if(bloomDay[i] < mini) mini = bloomDay[i]; 
        }
        int low = mini;
        int high = maxi;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(ispossible(bloomDay, mid, m, k)) {
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};