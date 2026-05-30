class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> maps;
        for(int i=0; i<nums.size() ; i++) {
            maps[nums[i]]++ ;
        }
        for ( auto map : maps) {
            if (map.second ==1) {
                return map.first;
            }
        }
        return -1;
    }
};