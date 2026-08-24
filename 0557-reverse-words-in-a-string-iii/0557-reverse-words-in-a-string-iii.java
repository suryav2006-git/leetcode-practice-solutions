class Solution {
    public String reverseWords(String s) {
        char[] str = s.toCharArray();
        int start = 0;

        for(int end =0 ; end < str.length ; end++) {
            if(str[end] == ' ' || end == str.length - 1) {
                int left = start;
                int right = (str[end] == ' ') ? end - 1 : end;

                while(left < right) {
                    char temp = str[left];
                    str[left] = str[right];
                    str[right] = temp;

                    left++ ;
                    right-- ;
                }
                start = end+1;
            }
        }
        return new String(str);
    }
}