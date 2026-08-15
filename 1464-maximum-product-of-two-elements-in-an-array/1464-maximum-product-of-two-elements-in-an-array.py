class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)

        if(n == 2) :
            return (nums[0] - 1) * (nums[1] - 1)

        max1 = max2 = float('-inf')

        for i in range(n) :
            if(nums[i] > max1) :
                max2 = max1
                max1 = nums[i]
            elif (nums[i] > max2) :
                max2 = nums[i]
        
        return (max1 - 1) * (max2 - 1)

        