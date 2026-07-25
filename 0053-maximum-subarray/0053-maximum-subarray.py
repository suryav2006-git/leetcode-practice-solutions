class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        currsum = 0
        maxi = nums[0]

        for val in nums:
            currsum += val
            maxi = max(currsum, maxi)
            if(currsum < 0) : currsum = 0
        return maxi
        