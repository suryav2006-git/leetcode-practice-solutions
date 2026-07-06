class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;

        int minprice = Integer.MAX_VALUE;
        int maxprofit = 0;

        for(int i=0; i< n; i++) {
            int current = prices[i];

            if(current < minprice) {
                minprice = current;
            }
            else {
                int profit = current - minprice;
                if(profit > maxprofit) {
                    maxprofit = profit;
                }
            }
            
        }
        return maxprofit;
    }
}