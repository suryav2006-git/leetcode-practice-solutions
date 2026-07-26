class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> charMap = new HashMap<>();
        int l = 0, max_len = 0;
        
        for (int r = 0; r < s.length(); r++) {
            char curr = s.charAt(r);
            if (charMap.containsKey(curr) && charMap.get(curr) >= l) {
                l = charMap.get(curr) + 1;
            }
            charMap.put(curr, r);
            max_len = Math.max(max_len, r - l + 1);
        }
        return max_len;
    }
}
