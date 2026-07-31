class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>num=nums;

        reverse(num.begin(), num.end());

        nums.insert(nums.end(),num.begin(),num.end());
        
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna