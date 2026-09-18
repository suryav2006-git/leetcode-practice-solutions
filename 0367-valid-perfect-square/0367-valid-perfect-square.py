class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if(num < 1) : 
            return False
        low = 1
        high = num

        while(low <= high) :
            mid = low + (high - low) / 2
            sqr = mid * mid

            if(sqr == num) :
                return True
            elif (sqr < num) :
                low = mid + 1
            else : 
                high = mid - 1
        return False 
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna