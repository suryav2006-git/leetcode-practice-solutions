class Solution(object):
    def canAliceWin(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        once = 0
        twice = 0
        for num in nums:
            if (num <= 9) : once += num
            else : twice += num
        return once > twice or twice > once
        
        