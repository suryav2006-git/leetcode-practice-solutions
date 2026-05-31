class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int element ;
        int excess;
        HashMap<Integer,Integer> mpp = new HashMap<>();

        for(int i=0;i<n; i++) {
            element = nums[i];
            excess = target - element;

            if(mpp.containsKey(excess) ) {
                return new int[] {mpp.get(excess),i};
            }
            mpp.put(element,i);
        }   
        return new int[] {};
    }
}