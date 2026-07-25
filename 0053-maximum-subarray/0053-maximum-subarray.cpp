class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();

        int sum = 0;
        int maxi = INT_MIN;

        for(int val : arr) {
            sum += val;
            maxi = max(maxi, sum);

            if(sum < 0) sum = 0;
        }

        return maxi;
        
    }
};