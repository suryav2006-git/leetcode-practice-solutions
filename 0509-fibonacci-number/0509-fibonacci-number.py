class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if(n<=1) :
            return n

        first = 0
        second = 1
        current = 0

        for i in range(2,n+1) :
            current = first + second 
            first = second 
            second = current

        return current
        