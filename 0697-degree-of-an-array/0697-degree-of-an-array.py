class Solution(object):
    def minOf(self, a, b):
        if a <= b: 
            return a
        return b

    def findShortestSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = {}
        firstSeen = {}

        n = len(nums)
        maxCount = 0
        length = 1

        for i in range(n):
            if nums[i] not in firstSeen:
                firstSeen[nums[i]] = i + 1

            count[nums[i]] = count.get(nums[i], 0) + 1

            currentCount = count[nums[i]]
            firstSeenCount = firstSeen[nums[i]]

            if currentCount > maxCount:
                maxCount = currentCount
                length = (i + 1) - firstSeenCount + 1
            elif currentCount == maxCount:
                length = self.minOf(length, (i + 1) - firstSeenCount + 1)

        return length
