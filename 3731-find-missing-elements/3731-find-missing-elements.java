class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        if (nums == null || nums.length == 0) {
            return new ArrayList<>();
        }
        
        List<Integer> result = new ArrayList<>();
        Arrays.sort(nums);
        
        int prev = nums[0];
        
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == prev) {
                continue;
            }
            while (prev + 1 < nums[i]) {
                result.add(++prev);
            }
            prev = nums[i];
        }
        return result;
    }
}