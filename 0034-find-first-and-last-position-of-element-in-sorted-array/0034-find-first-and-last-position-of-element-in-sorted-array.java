class Solution {

    public int FirstSearch(int[] nums, int n, int target) {
        int low = 0;
        int high = n-1;
        int first = -1;

        while(low<=high) {
            int mid = low + (high - low)/2;
            if(nums[mid]==target) {
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid]>=target) {
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return first;
    }

    public int SecondSearch(int[] nums, int n , int target) {
        int low =0;
        int high = n-1;
        int second = -1;

        while(low<=high) {
            int mid = low + (high - low ) / 2;

            if(nums[mid] == target) {
                second = mid;
                low = mid + 1;
            }  
            else if(nums[mid]>target) {
                high = mid -1;
            }
            else low = mid + 1;
        }
        return second;
    }

    public int[] searchRange(int[] nums, int target) {
        int n = nums.length;
        int first = -1;
        int second = -1;

        first = FirstSearch(nums,n,target);

        if(first == -1) return new int[] {-1,-1};
        second = SecondSearch(nums,n,target);

        return new int[] {first,second};
    }
}