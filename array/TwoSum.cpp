// Two Sum Leetcode Solution in cpp
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a copy of the original array to keep track of original indices
        vector<pair<int, int>> numsWithIndex(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            numsWithIndex[i] = {nums[i], i};
        }
        
        // Sort the array of pairs based on values
        sort(numsWithIndex.begin(), numsWithIndex.end());
        
        // For example, if nums = {3, 7, 2, 9}, then numsWithIndex would become {(3, 0), (7, 1), (2, 2), (9, 3)}, 
        // where the first value in each pair is from nums, and the second value is the index of that element in nums.
        // Initialize two pointers, one at the beginning and one at the end of the sorted array.
        
        int left = 0;
        int right = nums.size() - 1;
        
        // Iterate until the two pointers meet
        while (left < right) {
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;
            if (sum == target) {
                // If sum equals target, return the original indices of both numbers
                return {numsWithIndex[left].second, numsWithIndex[right].second};
            } else if (sum < target) {
                // If sum is less than target, move the left pointer forward
                left++;
            } else {
                // If sum is greater than target, move the right pointer backward
                right--;
            }
        }
        
        // If no such pair found, return an empty vector
        return {};
    }
};
