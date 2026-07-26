class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty()) {
            return {};
        }

        unordered_map<string, vector<string>> countMap;

        for (const string& s : strs) {
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
            }

            string key = "";
            char label = 'a';
            for (int count : freq) {
                key += label;
                key += to_string(count);
                label++;
            }

            countMap[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& pair : countMap) {
            result.push_back(move(pair.second));
        }

        return result;
    }
};
