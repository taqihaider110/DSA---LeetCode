// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n=nums.size();
//         int maxcount = 0;
//         int element_having_max_freq;
//         for (int i = 0; i < n; i++) {
//             int count = 0;
//             for (int j = 0; j < n; j++) {
//                 if (nums[i] == nums[j])
//                     count++;
//             }
//             if(count >nums.size()/2){
//                 return nums[i];
//             }
//             else if (count > maxcount) {
//                 maxcount = count;
//                 element_having_max_freq = nums[i];
//             }
//         }

//         return element_having_max_freq;
//     }
// };
#include <vector>
#include <algorithm>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1; // Initialize count of the first element as 1
        int majority_element = nums[0]; // Initialize majority element as the first element

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                // If the current element is equal to the previous one, increment count
                count++;
                if (count > n / 2) {
                    // If count becomes greater than half of the array size,
                    // the current element is the majority element
                    majority_element = nums[i];
                    break; // No need to check further
                }
            } else {
                // Reset count and update the majority element
                count = 1;
                majority_element = nums[i];
            }
        }

        return majority_element;
    }
};
