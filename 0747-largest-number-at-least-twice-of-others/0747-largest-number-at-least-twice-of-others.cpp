class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN ;
        int maxIndex = 0;

        for(int i =0; i< n ; i++) {
            if(nums[i] > maxi) {
                maxi = nums[i];
                maxIndex = i;
            }
        }
        for(int i =0; i<n ; i++) {
            if(i != maxIndex && (nums[i] * 2) > maxi) {
                return -1;
            }
        }
        return maxIndex;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna