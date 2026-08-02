class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;

        for(int i=nums.size()-1 ; i>=0 ; i--) {
            int n = nums[i];
            while(n!=0) {
                int digit = n % 10;
                digits.push_back(digit);
                n = n / 10;
            }
        }
        int n = digits.size();
        vector<int> result(n);

        for(int i=0; i<n ; i++) {
            result[i] = digits[n-i-1];
        }
        return result;
    }
};