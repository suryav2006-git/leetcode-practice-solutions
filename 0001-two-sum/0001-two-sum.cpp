class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int excess;
        int element ;
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++) {
            element = nums[i];
            excess = target - element;
            if(mpp.find(excess) != mpp.end()) {
                return {mpp[excess],i} ;
            }
            mpp[element] = i;
        }
        return {};
    }
};