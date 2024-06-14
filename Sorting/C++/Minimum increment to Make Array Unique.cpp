class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count =0;
        for(int i=0;i<nums.size()-1;i++){
            if (nums[i] >= nums[i + 1]) { // If current number is not less than or equal to the next one
                int increment = nums[i] + 1 - nums[i + 1]; // Calculate increment needed
                nums[i + 1] = nums[i] + 1; // Increment the current number to make it unique
                count += increment; // Accumulate the increment count
            }
        }
        return count;
    }
};