int max(int a , int b) {
    if (a>=b) return a;
    else return b;
}

int findMaxConsecutiveOnes(int* nums, int n) {
    int count = 0;
    int maxi = 0;
    for(int i=0; i<n ; i++ ) {
        if(nums[i]==1) {
            count = count + 1;
            maxi = max(count,maxi);
        }
        else {
            count = 0;
        }
    }
    return maxi;
}