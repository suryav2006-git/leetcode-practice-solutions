class Solution(object):
    def findSpecialInteger(self, nums):
        """
        :type arr: List[int]
        :rtype: int
        """
        n = len(nums)
        times = n // 4

        for i in range(n-times) :
            if(nums[i] == nums[i+times]) :
                return nums[i]
        return -1

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna