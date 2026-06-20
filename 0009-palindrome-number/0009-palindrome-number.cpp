class Solution {
public:
    bool isPalindrome(int num) {
        if(num<0) return false;

        int temp = num;
        long long reverse = 0;

        while(temp>0) {
            int last = temp % 10;
            reverse = (reverse * 10) + last;
            temp = temp / 10;
        }
        if(num == reverse) return true;
        else return false;
        
    }
};