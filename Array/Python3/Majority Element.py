from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # Sort the list of numbers
        nums.sort()
        
        n = len(nums)
        count = 1  # Initialize the count
        majority_element = nums[0]  # Assume the first element as the majority
        
        # Loop through the list to find the majority element
        for i in range(1, n):
            if nums[i] == nums[i - 1]:  # If the current element is the same as the previous
                count += 1  # Increment the count
                # Check if it exceeds half the size of the list
                if count > n // 2:
                    majority_element = nums[i]
                    break  # Found the majority, exit the loop
            else:
                count = 1  # Reset count if the current element is different
                majority_element = nums[i]  # Update the possible majority element
        
        return majority_element  # Return the found majority element
