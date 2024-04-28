#include <vector>  // Include the vector library

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> merged;  // Create a vector to hold the merged result
        int m = 0, n = 0;  // Pointers to track the current position in each array

        // Merge two sorted arrays into one sorted array
        while (m < nums1.size() && n < nums2.size()) {
            // Compare current elements from nums1 and nums2
            if (nums1[m] < nums2[n]) {
                merged.push_back(nums1[m]);  // Add the smaller element to merged
                m++;  // Move the pointer in nums1
            } else {
                merged.push_back(nums2[n]);  // Add the smaller element to merged
                n++;  // Move the pointer in nums2
            }
        }

        // Add remaining elements from nums1, if any
        while (m < nums1.size()) {
            merged.push_back(nums1[m]);
            m++;  // Continue moving through nums1
        }

        // Add remaining elements from nums2, if any
        while (n < nums2.size()) {
            merged.push_back(nums2[n]);
            n++;  // Continue moving through nums2
        }

        // Determine the size of the merged array
        int size = merged.size();

        // If the size is odd, return the middle element as the median
        if (size % 2 != 0) {
            return merged[size / 2];  // The middle index for odd-sized arrays
        } else {
            // If the size is even, return the average of the two middle elements
            int left_middle = size / 2 - 1;  // Index for the left middle element
            int right_middle = size / 2;  // Index for the right middle element
            return (merged[left_middle] + merged[right_middle]) / 2.0;  // Return the average of the two middle elements
        }
    }
};
