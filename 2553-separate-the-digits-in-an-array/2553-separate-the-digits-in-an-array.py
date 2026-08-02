class Solution(object):
    def separateDigits(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        digits = []

        for i in range(len(nums) - 1, -1, -1):
            n = nums[i]
            while n != 0:
                digit = n % 10
                digits.append(digit)
                n = n // 10  

        n_size = len(digits)
        result = [0] * n_size 

        for i in range(n_size):
            result[i] = digits[n_size - i - 1]
            
        return result