class Solution(object):
    def isPalindrome(self, str):
        """
        :type s: str
        :rtype: bool
        """
        s = "".join( c.lower() for c in str if c.isalnum() )

        i = 0
        j = len(s) -1
        while(i <= j) :
            if( s[i] != s[j] ) :
                return False
            i+=1
            j-=1
        return True