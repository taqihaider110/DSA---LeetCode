from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Create a list of pairs (number, index)
        nums_with_index = [(num, i) for i, num in enumerate(nums)]
        
        # Sort the list based on the numbers
        nums_with_index.sort()
        
        # Initialize two pointers
        left, right = 0, len(nums) - 1
        
        # Loop until the two pointers meet
        while left < right:
            # Calculate the sum of the numbers at the two pointers
            total = nums_with_index[left][0] + nums_with_index[right][0]
            
            # If the sum equals the target, return the indices
            if total == target:
                return [nums_with_index[left][1], nums_with_index[right][1]]
            
            # If the sum is less than the target, move the left pointer to the right
            elif total < target:
                left += 1
            
            # If the sum is greater than the target, move the right pointer to the left
            else:
                right -= 1
        
        # If no solution is found, return an empty list
        return []
