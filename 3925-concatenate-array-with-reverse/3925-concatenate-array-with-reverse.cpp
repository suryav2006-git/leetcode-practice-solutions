class Solution {
public:
    vector<int> concatWithReverse(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans;

        ans.reserve(n * 2);

        ans.assign(arr.begin(), arr.end());

        ans.insert(ans.end() , arr.rbegin(), arr.rend() );

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna