class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);

        List<List<Integer>> ans = new ArrayList<>();

        for(int i=0; i<n-2 ; i++) {
            if(nums[i] > 0) break;

            if(i>0 && nums[i] == nums[i-1]) continue;

            if(nums[i] + nums[i+1] + nums[i+2] > 0) break;
            if(nums[i] + nums[n-1] + nums[n-2] < 0) continue;

            int j = i+1;
            int k = n-1;

            while(j<k) {
                int sum = nums[i] + nums[j] + nums[k];
                 

                if(sum < 0) j++ ;
                else if (sum > 0) k--;
                else {
                    List<Integer> temp = Arrays.asList(nums[i], nums[j], nums[k]);
                    ans.add(temp);

                    j++ ;
                    k-- ;

                    while(j<k && nums[j] == nums[j-1]) j++ ;
                    while(j<k && nums[k] == nums[k+1]) k-- ;
                }
            }
        }
        return ans;
    }
}