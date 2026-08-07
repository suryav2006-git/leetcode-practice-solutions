class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if numRows == 0:
            return []
            
        triangle = [[1]]
        
        for _ in range(1, numRows):
            prev_row = triangle[-1]
            next_row = [left + right for left, right in zip([0] + prev_row, prev_row + [0])]
            triangle.append(next_row)
            
        return triangle

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna