class Solution {
    public int[] concatWithReverse(int[] nums) {
        int n = nums.length;

        int[] ans = new int[n*2];

        for(int i=0; i<n ; i++) {
            ans[i] = nums[i];
        }

        for(int i=0; i<n ; i++) {
            ans[n+i] = nums[n-1-i];
        }

        return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna