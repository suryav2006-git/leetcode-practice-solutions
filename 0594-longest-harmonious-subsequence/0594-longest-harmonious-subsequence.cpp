class Solution {
public:
    int findLHS(vector<int>& nums) {
        int result = 0;
        unordered_map<int, int> map;
        for (int num : nums) {
            map[num]++;
        }

        for (auto const& [key, count] : map) {
            if (map.count(key + 1)) {
                result = std::max(result, count + map[key + 1]);
            }
        }
        return result;
    }
};