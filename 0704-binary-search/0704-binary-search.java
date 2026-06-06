class Solution {

    public int RecursiveBinarySearch(int[] nums, int low, int high, int target) {
        if(low>high) return -1;

        int mid = (low + high )/ 2;

        if(nums[mid] == target) return mid;
        else if ( target > nums[mid])  {
            return RecursiveBinarySearch(nums, mid + 1, high, target );
        }
        else return RecursiveBinarySearch(nums, low, mid-1, target );
    }

    public int search(int[] nums, int target) {
        int n = nums.length;
        int low = 0;
        int high = n-1;

        int index = RecursiveBinarySearch(nums,low,high,target);
        return index;
    }
}