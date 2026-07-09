class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)

        if (n==1): return

        j=-1

        for i in range(n) :
            if(nums[i] == 0) :
                j=i
                break

        if (j==-1) : return

        for i in range(j+1,n) :
            if(nums[i] != 0) :
                temp  = nums[i]
                nums[i] = nums[j]
                nums[j] = temp
                j = j+1