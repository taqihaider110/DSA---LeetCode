#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Sort both input arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        // Find the intersection of nums1 and nums2
        vector<int> nums;
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(nums));
        
        // Remove consecutive duplicates from the intersection
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            if (i == nums.size() - 1 || nums[i] != nums[i + 1]) {
                result.push_back(nums[i]);
            }
        }
        
        return result;
    }
};
