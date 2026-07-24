class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if(n==0): return 1.0
        
        N = n

        if(N < 0) :
            x = 1.0 / x
            N = -N
        
        ans = 1.0

        while(N > 0) :
            if(N % 2 == 1) :
                ans = ans * x
                N-=1
            else :
                N = N / 2
                x = x * x
        return ans

        