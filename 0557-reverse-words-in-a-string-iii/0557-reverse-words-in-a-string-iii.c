char* reverseWords(char* s) {
    int start = 0;
    int len = strlen(s);

    for (int end = 0; end < len; end++) {
        if (s[end] == ' ' || end == len - 1) {
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