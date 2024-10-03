class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int total_sum = 0;
        
        // Calculate the total sum of the array modulo p
        for (int num : nums) {
            total_sum = (total_sum + num) % p;
        }
        
        // If the total sum is already divisible by p, no need to remove any subarray
        if (total_sum == 0) return 0;
        
        // We want to find a subarray whose sum, when removed, will make the total sum divisible by p
        int min_len = n;  // The minimum length of the subarray to be removed
        int current_sum = 0;
        unordered_map<int, int> remainder_index;  // Hash map to store remainder -> index
        remainder_index[0] = -1;  // To handle the case when we find the valid subarray from the start
        
        for (int i = 0; i < n; ++i) {
            current_sum = (current_sum + nums[i]) % p;
            
            // Find the target remainder that we need to make the total sum divisible by p
            int target_remainder = (current_sum - total_sum + p) % p;
            
            // Check if this remainder exists in the map
            if (remainder_index.find(target_remainder) != remainder_index.end()) {
                // Calculate the length of the subarray to be removed
                min_len = min(min_len, i - remainder_index[target_remainder]);
            }
            
            // Store the current remainder and index
            remainder_index[current_sum] = i;
        }
        
        // If we never found a valid subarray, return -1
        return min_len == n ? -1 : min_len;
    }
};
