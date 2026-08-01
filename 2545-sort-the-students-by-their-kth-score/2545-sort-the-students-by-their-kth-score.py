class Solution(object):
    def sortTheStudents(self, score, k):
        """
        :type score: List[List[int]]
        :type k: int
        :rtype: List[List[int]]
        """
        n = len(score)
        preq = []
        
        for i in range(n):
            heapq.heappush(preq, (-score[i][k], i))
            
        result = []
        
        while preq:
            val, original_idx = heapq.heappop(preq)
            result.append(score[original_idx])
            
        return result