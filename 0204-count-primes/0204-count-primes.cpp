class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> isPrime(n, true);
        int count = 1;

        for(long long i=3; i<n ; i+=2) {
            if(isPrime[i]) {
                count++ ;
                for(long long j = i*i ; j<n ; j+= 2*i) {
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna