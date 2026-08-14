class Solution {
public:
    int minOf(int a, int b) {
        if (a <= b) return a;
        return b;
    }
    int maxCount(int m, int n, vector<vector<int>>& operations) {
        int minA = m;
        int minB = n;

        for (const auto& operation : operations) {
            minA = minOf(minA, operation[0]);
            minB = minOf(minB, operation[1]);
        }
        
        return minA * minB;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna