class Solution {
    public int[] separateDigits(int[] nums) {
        List<Integer> digits = new ArrayList<>();
        for (int i = nums.length - 1; i >= 0; i--) {
            int n = nums[i];
            while (n != 0) {
                int digit = n % 10;
                digits.add(digit);
                n = n / 10;
            }
        }
        int d = digits.size();
        int[] result = new int[d];
        for (int i = 0; i < d; i++) {
            result[i] = digits.get(d - i - 1);
        }
        return result;
    }
}