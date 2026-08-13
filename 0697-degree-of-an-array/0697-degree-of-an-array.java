class Solution {
    public int minOf(int a, int b) {
        if(a <= b) return a;
        return b;
    }
    public int findShortestSubArray(int[] nums) {
        HashMap<Integer,Integer> count = new HashMap<>();
        HashMap<Integer,Integer> firstSeen = new HashMap<>();

        int n = nums.length; int maxCount = 0; int length = 1;

        for(int i=0; i<n ; i++) {
            if( !(firstSeen.containsKey(nums[i]))) {
                firstSeen.put(nums[i], i+1);
            }

            count.put(nums[i], count.getOrDefault(nums[i],0) + 1);

            int currentCount = count.get(nums[i]);
            int firstSeenCount = firstSeen.get(nums[i]);

            if (currentCount > maxCount) {
                maxCount = currentCount;
                length = (i + 1) - firstSeenCount + 1;
            }
            else if (currentCount == maxCount) {
                length = minOf(length, (i + 1) - firstSeenCount + 1);
            }
        }
        return length;
    }
}