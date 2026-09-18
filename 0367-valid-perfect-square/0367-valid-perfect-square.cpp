class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 1) return false;

        long long low = 1;
        long long high = num;

        while(low <= high) {
            long long mid = low + (high - low) / 2;
            long long sqr = mid * mid;

            if(sqr == num) return true;
            else if(sqr < num) low = mid + 1;
            else high = mid -1;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna