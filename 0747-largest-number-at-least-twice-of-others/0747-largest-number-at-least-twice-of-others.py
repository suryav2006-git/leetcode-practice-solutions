class Solution(object):
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        maxi = float('-inf')
        max_index = 0
        
        for i in range(n):
            if nums[i] > maxi:
                maxi = nums[i]
                max_index = i
                
        for i in range(n):
            if i != max_index and (nums[i] * 2) > maxi:
                return -1
                
        return max_index

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna