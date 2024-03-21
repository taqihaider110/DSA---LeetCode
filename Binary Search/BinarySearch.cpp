// Binary Search in C++- Leet Code Solution
#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if target is present at mid
            if (nums[mid] == target)
                return mid;

            // If target is greater, ignore left half
            if (nums[mid] < target)
                left = mid + 1;

            // If target is smaller, ignore right half
            else
                right = mid - 1;
        }

        // If element is not present in array
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 3, 4, 10, 40};
    int target = 10;
    int result = solution.search(nums, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in array" << endl;
    return 0;
}
