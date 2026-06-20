class Solution {
    public boolean isPalindrome(int num) {
        if(num < 0) return false;

        int temp = num;
        long reverse = 0;

        while(temp>0) {
            int digit = temp % 10;
            reverse = (reverse*10) + digit;
            temp = temp / 10;
        } 
        if(num == reverse) return true;
        else return false;
    }
}