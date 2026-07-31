class Solution {
public:
    vector<int> concatWithReverse(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans(2*n) ;

        for(int i=0; i<n ; i++) {
            ans[i] = arr[i];

            ans[i+n] = arr[n-1 -i] ;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna