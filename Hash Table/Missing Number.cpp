class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Get the size of the input vector 'nums'
        int n = nums.size();
        
        // Calculate the sum of all numbers from 0 to n using the formula of sum of an arithmetic series
        int Total_Sum = (n * (n + 1)) / 2;
        
        // Initialize a variable to store the sum of elements in the 'nums' vector
        int Elements_Sum = 0;
        
        // Iterate through the elements of the 'nums' vector
        for(int i = 0; i < n; i++) {
            // Add the current element to the 'Elements_Sum'
            Elements_Sum += nums[i];
        }
        
        // Return the difference between the total sum and the sum of elements in 'nums'
        // This difference represents the missing number
        return Total_Sum - Elements_Sum;
    }
};
