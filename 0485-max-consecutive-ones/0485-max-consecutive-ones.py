class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        maxi = 0
        for i in range(0,len(nums)):
            if(nums[i]==1) :
                count+=1
                maxi = max(count,maxi)
            else : count = 0
        return maxi
        