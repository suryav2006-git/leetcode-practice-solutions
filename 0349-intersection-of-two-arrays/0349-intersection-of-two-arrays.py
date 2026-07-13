class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        sets = set()

        for num in nums1:
            sets.add(num)
        intersection = []

        for num in nums2:
            if(num in sets) :
                intersection.append(num)
                sets.remove(num)

        return intersection
        