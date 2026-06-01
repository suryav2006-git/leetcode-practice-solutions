class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign = -1 if x<0 else 1
        x = abs(x)
        rever = 0
        while(x!=0) :
            digit = x % 10
            rever = (rever*10) + digit
            x //= 10
        rever *= sign
        if rever < -2**31 or rever > 2**31 - 1:
            return 0
            
        return rever