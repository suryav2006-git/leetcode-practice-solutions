class Solution(object):
    def findPoisonedDuration(self, timeSeries, duration):
        """
        :type timeSeries: List[int]
        :type duration: int
        :rtype: int
        """
        n = len(timeSeries)
        if n == 0:
            return 0
            
        totalTime = n * duration
        timeDiff = 0

        for i in range(n - 1):
            timeTaken = timeSeries[i] + duration
            
            if timeTaken >= timeSeries[i + 1]:
                timeDiff += timeTaken - timeSeries[i + 1]
                
        return totalTime - timeDiff
