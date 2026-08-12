class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int  n = timeSeries.length;

        int totalTime = n * duration;
        int timeDiff = 0;

        for(int i=0; i<n-1 ; i++) {
            int timeTaken = timeSeries[i] + duration;

            if(timeTaken > timeSeries[i+1]) {
                timeDiff += timeTaken - timeSeries[i+1];
            }
        }
        return totalTime - timeDiff;
    }
}