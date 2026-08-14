class Solution(object):
    def minIncrementForUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()

        n = len(nums)
        count = 0 

        for i in range(1,n) :
            if(nums[i] <= nums[i-1]) :
                newValue = nums[i-1] + 1
                count += newValue - nums[i]
                nums[i] = newValue
        return count