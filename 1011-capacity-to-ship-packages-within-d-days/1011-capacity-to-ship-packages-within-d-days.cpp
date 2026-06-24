class Solution {
public:

    int maxof(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN ;

        for(int i=0; i<n ; i++) {
            if(nums[i] > maxi) maxi = nums[i];
        }
        return maxi;
    }

    int sumof(vector<int>& nums) {
        int n = nums.size();
        int sum =0;

        for(int i=0; i<n; i++) sum += nums[i];

        return sum;
    }

    int daysRequired(vector<int>& weights, int capacity) {
        int days = 1;
        int load = 0;
        int n = weights.size();

        for(int i=0; i<n ; i++) {
            if( load + weights[i] > capacity ) {
                days += 1;
                load = weights[i];
            }
            else load += weights[i];
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int maxdays) {
        int low = maxof(weights);
        int high = sumof(weights);
        
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
};