class Solution {
public:

    int maxof(vector<int>& nums, int n) {
        int maxi = INT_MIN ;
        for(int i=0; i<n ; i++) {
            if(nums[i] > maxi) maxi = nums[i];
        }
        return maxi;
    }

    int ispossible(vector<int>& nums, int div) {
        int sum =0;

        for(int num : nums) {
            sum += (( num + div -1 ) / div);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();

        if(n > threshold) return -1;

        int low = 1;
        int high = maxof(nums, n);  

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(ispossible(nums, mid ) <= threshold) {
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};