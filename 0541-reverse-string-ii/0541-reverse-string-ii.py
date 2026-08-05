class Solution(object):
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        s_list = list(s)
        n = len(s_list)
        
        for i in range(0, n, 2 * k):
            start = i
            end = min(i + k - 1, n - 1)

            while start < end:
                s_list[start], s_list[end] = s_list[end], s_list[start]
                start += 1
                end -= 1
                
        return "".join(s_list)
