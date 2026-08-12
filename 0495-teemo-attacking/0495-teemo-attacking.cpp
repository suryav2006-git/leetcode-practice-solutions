class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long n = timeSeries.size();
        long long totalTime = n * duration; 
        long long timeDiff = 0;

        for(int i = 0; i < n - 1; i++) {
            long long timeTaken = timeSeries[i] + duration;
            
            if(timeTaken >= timeSeries[i+1]) {
                timeDiff += timeTaken - timeSeries[i+1];
            }
        }
        return totalTime - timeDiff;
    }
};