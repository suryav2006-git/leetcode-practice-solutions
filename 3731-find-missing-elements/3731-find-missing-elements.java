class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        List<Integer> result = new ArrayList<>();
        int n = nums.length;
        Arrays.sort(nums) ;

        int prev = nums[0];

        for(int i = 1; i<n ; i++) {
            while(nums[i] != prev+1) {
                result.add(++prev);
            }
            prev = nums[i];
        }
        return result;
    }
}