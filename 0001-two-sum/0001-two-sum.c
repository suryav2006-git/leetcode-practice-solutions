#include <stdlib.h> // Required for malloc

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // LeetCode requires the function to allocate memory dynamically
    int* ans = (int*)malloc(2 * sizeof(int));
    if (ans == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    // Iterate through each element with the first loop
    for (int i = 0; i < numsSize; i++) {
        // Iterate through the remaining elements with the second loop
        for (int j = i + 1; j < numsSize; j++) {
            // Check if the current pair sums to the target
            if (nums[i] + nums[j] == target) {
                // If found, store the indices
                ans[0] = i;
                ans[1] = j;
                // Set the return size as required by the LeetCode function signature
                *returnSize = 2;
                // Return the dynamically allocated array
                return ans;
            }
        }
    }
    
    // If no solution is found (though problem constraints usually guarantee one)
    *returnSize = 0;
    free(ans); // Free allocated memory if not returned
    return NULL;
}
