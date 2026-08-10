class Solution(object):
    def findMissingElements(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        if not nums:
            return []
        
        nums.sort()
        result = []
        prev = nums[0]
        
        for i in range(1, len(nums)):
            if nums[i] == prev:
                continue
            while prev + 1 < nums[i]:
                prev += 1
                result.append(prev)
            prev = nums[i]
            
        return result