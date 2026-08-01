class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        maxsum = float('-inf')
        
        for row in accounts:
            current_sum = sum(row)
            if current_sum > maxsum:
                maxsum = current_sum  
                
        return maxsum
        