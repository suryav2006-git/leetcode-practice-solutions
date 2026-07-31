class Solution {
    public int countDigitOccurrences(int[] nums, int digit) {
        int count = 0;
        for (int num : nums) {
            int temp = num;
            if (temp == 0 && digit == 0) {
                count++;
                continue;
            }
            while (temp > 0) {
                if (temp % 10 == digit) {
                    count++;
                }
                temp /= 10;
            }
        }
        return count;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna