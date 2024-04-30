from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Check if the array is empty
        if not nums:
            return 0

        # The counter for the unique element's index
        counter = 0

        # Loop through the array to find unique elements
        for i in range(1, len(nums)):  # Start from the second element
            if nums[i] != nums[counter]:  # If a unique element is found
                counter += 1  # Move the counter
                nums[counter] = nums[i]  # Update the array with the unique element

        # Return the new length of the array with unique elements
        return counter + 1
