class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0;
        int n = nums.size();
        while (i < n) {
            int j = i + 1;
            while (j < n && j<= i + k) {
                if (nums[i] == nums[j]){
                    return true;
                }
                j++;
            }
            i++;
        }
        return false;
    }
};