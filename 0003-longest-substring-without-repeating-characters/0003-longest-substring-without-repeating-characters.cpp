class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap;
        int l = 0, max_len = 0;
        
        for (int r = 0; r < s.length(); r++) {
            if (charMap.find(s[r]) != charMap.end() && charMap[s[r]] >= l) {
                l = charMap[s[r]] + 1;
            }
            charMap[s[r]] = r;
            max_len = max(max_len, r - l + 1);
        }
        return max_len;
    }
};
