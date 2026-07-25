class Solution {

    public int maxof(int a, int b) {
        if(a >= b) return a;
        return b;
    }

    public int maxSubArray(int[] arr) {
        int sum = 0;
        int maxi = Integer.MIN_VALUE ;

        for(int val : arr) {
            sum += val;

            maxi = maxof(maxi , sum);

            if(sum < 0) sum = 0;
        }
        return maxi;
    }
}