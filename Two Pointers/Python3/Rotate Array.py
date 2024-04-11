from typing import List


class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # Get the length of the array
        n = len(nums)
        
        # Calculate the effective number of rotations
        k %= n

        # Reverse the entire array
        nums.reverse()

        # Reverse the first k elements
        nums[:k] = nums[:k][::-1]
        
        # Reverse the remaining elements
        nums[k:] = nums[k:][::-1]
