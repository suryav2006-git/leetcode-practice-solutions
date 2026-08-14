class Solution(object):
    def minOf(self, a, b):
        if a <= b:
            return a
        return b

    def maxCount(self, m, n, ops):
        """
        :type m: int
        :type n: int
        :type ops: List[List[int]]
        :rtype: int
        """
        minA = m
        minB = n

        for operation in ops:
            minA = self.minOf(minA, operation[0])
            minB = self.minOf(minB, operation[1])
            
        return minA * minB


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna