class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        n = len(s)

        if (n%2 == 1) :
            return False
        
        stack = []

        for c in s:
            if(c == '(') :
                stack.append(')')
            elif (c == '[') :
                stack.append(']')
            elif (c == '{') :
                stack.append('}')

            else :
                if not stack or stack.pop() != c :
                    return False

        return not stack