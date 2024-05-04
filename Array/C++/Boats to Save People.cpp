#include <vector>
#include <algorithm> // For std::sort
#include <iostream>  // For debugging or testing with std::cout

class Solution {
public:
    // Function to determine the minimum number of boats needed
    int numRescueBoats(std::vector<int>& people, int limit) {
        // Step 1: Sort the 'people' vector in ascending order of weight
        std::sort(people.begin(), people.end()); // Ensures we can use a two-pointer approach
        
        // Step 2: Initialize the boat count and two pointers
        int count = 0; // Counter for the number of boats required
        int left = 0;  // Points to the lightest person in the sorted list
        int right = people.size() - 1;  // Points to the heaviest person in the sorted list
        
        // Step 3: Loop to determine boat assignments
        while (left <= right) { // Continue while there are people to assign to boats
            // Check if the lightest and heaviest person can share a boat
            if (people[left] + people[right] <= limit) {
                left++;  // If they can share a boat, move 'left' to the next lightest
            }
            // 'right' always moves (the heaviest person is given a boat, whether alone or with 'left')
            right--;  
            
            // Every iteration of the loop represents one boat being used
            count++;  // Increment the boat count
        }

        // Step 4: Return the total number of boats required
        return count; 
    }
};
