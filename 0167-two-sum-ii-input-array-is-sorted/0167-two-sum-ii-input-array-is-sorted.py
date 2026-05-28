class Solution(object):
    def twoSum(self, nums, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(nums)
        i = 0
        j = n-1

        while(i<=j) :
            total = nums[i] + nums[j]
            if total == target :
                return [ i+1 , j+1 ]
            if total < target :
                i+=1
            if total > target:
                j-=1
        return []
        