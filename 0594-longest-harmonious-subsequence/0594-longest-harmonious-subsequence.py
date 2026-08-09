class Solution(object):
    def findLHS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result = 0
        counts = Counter(nums)

        for key in counts:
            if (key + 1) in counts:
                result = max(result, counts[key] + counts[key + 1])
                
        return result