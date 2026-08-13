class Solution {
public:
    int minOf(int a, int b) {
        if(a <= b) return a;
        return b;
    }
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> count;
        unordered_map<int,int> firstSeen;

        int maxCount =0; int n = nums.size();
        int length = 1;

        for(int i=0; i<n; i++) {
            if(!firstSeen[nums[i]]) firstSeen[nums[i]] = i+1;

            count[nums[i]]++ ;

            if(count[nums[i]] > maxCount) {
                maxCount = count[nums[i]];
                length = (i+1) - firstSeen[nums[i]] + 1;
            }
            else if(count[nums[i]] == maxCount) {
                length = minOf(length, (i+1) - firstSeen[nums[i]] +1);
            }
        }
        return length;
    }
};