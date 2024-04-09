#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;
        int left = 0;
        int right = nums.size() - 1;

        // First binary search loop to find the start index of target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                start = mid;
                right = mid - 1; // Continue searching towards the left
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        left = 0;
        right = nums.size() - 1;

        // Second binary search loop to find the end index of target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                end = mid;
                left = mid + 1; // Continue searching towards the right
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return {start, end};
    }
};
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int start=-1;
//         int end = -1;

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == target && start == -1) {
//                 start = i;
//                 end = i;
//             }
//             if (nums[i] == target && end != -1) {
//                 end = i;
//             }
//         }
//         return {start, end};
//     }
// };