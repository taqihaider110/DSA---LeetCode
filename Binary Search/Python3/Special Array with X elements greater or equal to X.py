class Solution:
    def specialArray(self, nums: List[int]) -> int:
        nums.sort()  # Step 1: Sort the array
        i = 0
        prev = -1
        total_right = len(nums)  # Initially, total_right is the size of the array
        
        while i < len(nums):
            # Step 2: Check if nums[i] equals total_right or prev < total_right < nums[i]
            if nums[i] == total_right or (prev < total_right < nums[i]):
                return total_right
            
            # Move to the next distinct element
            while i + 1 < len(nums) and nums[i] == nums[i + 1]:
                i += 1
            
            # Update prev to the current value
            prev = nums[i]
            
            # Update total_right for the next iteration
            i += 1
            total_right = len(nums) - i
        
        # If no valid x found
        return -1