public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        // Create a dictionary to store the number and its index
        Dictionary<int, int> map = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++) {
            int complement = target - nums[i];

            // Check if the complement is already in the dictionary
            if (map.ContainsKey(complement)) {
                // Return the indices of the two numbers
                return new int[] { map[complement], i };
            }

            // Add the current number and its index to the dictionary
            if (!map.ContainsKey(nums[i])) {
                map.Add(nums[i], i);
            }
        }

        // Return an empty array if no solution is found (though there should always be one)
        return new int[0];
    }
}
