class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mpp = {}  

        for i, element in enumerate(nums):
            excess = target - element

            if excess in mpp:
                return [mpp[excess], i]

            mpp[element] = i

        return []
