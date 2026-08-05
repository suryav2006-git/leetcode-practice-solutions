class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int once = 0;
        int twice = 0;

        for(int num : nums) {
            if(num <=9) once += num;
            else twice += num;
        }
        return (once > twice) || twice > once;
    }
};