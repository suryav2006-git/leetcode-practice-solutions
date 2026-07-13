class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set = new HashSet<>();

        for(int num : nums1) {
            set.add(num);
        }

        List<Integer> intersection = new ArrayList<>();

        for(int num : nums2) {
            if(set.contains(num)) {
                intersection.add(num);
                set.remove(num);
            }
        }
        int[] ans = new int[intersection.size()];

        int i = 0;
        for(int num : intersection) {
            ans[i++] = num;
        }
        return ans;
    }
}