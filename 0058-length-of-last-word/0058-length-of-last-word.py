class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s) - 1
        length = 0

        while (n >= 0 and s[n] == ' ') :
            n-=1
        
        while (n >= 0) and (s[n] != ' ') :
            length+=1
            n-=1
        return length
        