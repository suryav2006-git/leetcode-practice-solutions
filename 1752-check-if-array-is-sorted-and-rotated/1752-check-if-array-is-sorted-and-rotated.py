class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n = len(nums)

        compare = 0
        if(nums[0] < nums[-1]) :
            compare+=1
        for i in range(1,n) :
            if(nums[i] < nums[i-1]) :
                compare += 1
        return compare<=1