int reverse(int num){
    int digit;
    int reversed = 0;
    while(num!=0) {
        digit = num % 10;
        // last digit
        if( reversed > INT_MAX / 10 || reversed < INT_MIN / 10 ) {
            return 0;
        }

        reversed = (reversed*10) + digit;
        num = num / 10;
    }
    return reversed;
}