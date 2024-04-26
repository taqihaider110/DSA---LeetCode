class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0; // Return 0 for an empty array
        }

        int l = 1; // 'l' is where to write non-duplicate elements
        int count = 1; // 'count' keeps track of occurrences for current element

        // Loop through the array starting from the second element
        for (int r = 1; r < nums.size(); r++) {
            // If the current element matches the previous one, it's a duplicate
            if (nums[r] == nums[r - 1]) { 
                count++; // Increment the duplicate count
            } else {
                count = 1; // Reset count when a new distinct element is found
            }

            // If the count is <= 2, retain the element
            if (count <= 2) { 
                nums[l] = nums[r]; // Write the current element at 'l'
                l++; // Move 'l' to the next position
            }
        }

        return l; // Return the length of the array without excess duplicates
    }
};
