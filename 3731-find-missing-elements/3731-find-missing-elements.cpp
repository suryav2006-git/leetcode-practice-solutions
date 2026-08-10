class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {}; 
        
        int n = nums.size();
        vector<int> result;
        sort(nums.begin(), nums.end());
        
        int prev = nums[0];

        for(int i = 1; i < n; i++) {
            if (nums[i] == prev) {
                continue;
            }
            while(prev + 1 < nums[i]) {
                result.push_back(++prev);
            }
            prev = nums[i];
        }
        return result;
    }
};