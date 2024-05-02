#include <vector> // For std::vector
#include <unordered_set> // For std::unordered_set
#include <algorithm> // For std::max

class Solution {
public:
    // Function to find the largest positive integer 'k' such that '-k' also exists in the given list 'nums'
    int findMaxK(std::vector<int>& nums) {
        // Create a set to store all unique elements from the list
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        
        // Initialize maxK to -1, indicating no such positive number is found initially
        int maxK = -1;
        
        // Iterate through each number in the list 'nums'
        for (int num : nums) {
            // If the number is positive and its negative counterpart exists in 'numSet'
            if (num > 0 && numSet.count(-num)) {
                // Update 'maxK' with the maximum of 'maxK' and 'num'
                maxK = std::max(maxK, num);
            }
        }
        
        // Return the largest positive number with its negative counterpart, or -1 if none found
        return maxK;
    }
};
