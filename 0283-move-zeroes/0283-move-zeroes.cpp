class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return ;

        int j;
        for (int i=0; i<n ; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        for(int i = j+1 ; i<n ; i++) {
            if(nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
        return;
    }
};