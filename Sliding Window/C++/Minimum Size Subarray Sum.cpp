class Solution {
public:
    // Function to find the minimum length of a subarray with a sum greater than or equal to a target
    int minSubArrayLen(int target, vector<int>& nums) {
        // Initialize the left pointer for the sliding window
        int left = 0;

        // Variable to keep track of the sum of elements within the current window
        int current_sum = 0;

        // Variable to store the minimum length of the subarray
        // Initialize with the maximum possible value (to ensure we can update it with minimums)
        int min_len = INT_MAX;
        
        // Traverse the array with the right pointer
        for (int right = 0; right < nums.size(); right++) {
            // Expand the window by adding the current element to the current_sum
            current_sum += nums[right];

            // While the current_sum is greater than or equal to the target,
            // contract the window to find the smallest possible subarray
            while (current_sum >= target) {
                // Update the minimum length with the current window size if it's smaller
                min_len = min(min_len, right - left + 1);

                // Move the left pointer to shrink the window
                // Subtract the element at the left pointer from current_sum
                current_sum -= nums[left];
                
                // Increment the left pointer to contract the window
                left++;
            }
        }

        // If the minimum length hasn't changed from INT_MAX, no valid subarray was found
        // Otherwise, return the minimum length found
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};
