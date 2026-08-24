class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        str_list = list(s)
        start = 0
        length = len(str_list)

        for end in range(length):
            if str_list[end] == ' ' or end == length - 1:
                left = start
                right = (end - 1) if str_list[end] == ' ' else end

                while left < right:
                    temp = str_list[left]
                    str_list[left] = str_list[right]
                    str_list[right] = temp

                    left += 1
                    right -= 1
                
                start = end + 1

        return "".join(str_list)