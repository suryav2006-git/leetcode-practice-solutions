class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for (int end = 0; end < s.length(); end++) {
            if (s[end] == ' ' || end == s.length() - 1) {
                int left = start;
                int right = (s[end] == ' ') ? end - 1 : end;

                while (left < right) {
                    char temp = s[left];
                    s[left] = s[right];
                    s[right] = temp;

                    left++;
                    right--;
                }
                start = end + 1;
            }
        }
        return s;
    }
};