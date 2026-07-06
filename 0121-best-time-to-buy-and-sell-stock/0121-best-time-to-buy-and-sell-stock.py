import sys

class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        if not prices :
            return 0

        n = len(prices)
        minprice = sys.maxsize
        maxprice = 0

        for currentprice in prices:
            if(currentprice < minprice) :
                minprice = currentprice
            else:
                profit = currentprice - minprice
                if(profit > maxprice) :
                    maxprice = profit
        return maxprice
        