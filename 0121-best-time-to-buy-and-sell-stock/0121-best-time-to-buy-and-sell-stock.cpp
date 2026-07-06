class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int minprice = INT_MAX;
        int maxprice = 0;

        int current;

        for(int i=0; i<n; i++) {
            current = prices[i];
            if(current < minprice) {
                minprice = current; 
            }
            else {
                int profit = current - minprice;
                if(profit > maxprice) {
                    maxprice = profit;
                }
            }
        }
        return maxprice;
    }
};