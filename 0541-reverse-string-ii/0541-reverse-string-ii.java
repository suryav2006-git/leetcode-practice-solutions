class Solution {
    public String reverseStr(String arr, int k) {
        int n = arr.length();
        char[] s = arr.toCharArray();

        for(int i=0; i<n ; i+= 2*k) {
            int start = i;
            int end = Math.min(i+k-1 , n-1);

            while(start<end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++ ;
                end-- ;
            }
        }
        return new String(s);
    }
}