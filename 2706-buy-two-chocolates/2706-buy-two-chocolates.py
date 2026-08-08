class Solution(object):
    def buyChoco(self, prices, money):
        """
        :type prices: List[int]
        :type money: int
        :rtype: int
        """
        min1 = float('inf')
        min2 = float('inf')

        for price in prices:
            if price < min1 :
                min2 = min1
                min1 = price
            elif price < min2 :
                min2 = price
        
        remain = money - (min1 + min2)

        if(remain >= 0) : 
            return remain
        return money
        