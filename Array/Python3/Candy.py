from typing import List

class Solution:
    def candy(self, ratings: List[int]) -> int:
        # Step 1: Initialize an array 'arr' with the same length as 'ratings', setting each element to 1.
        # This ensures that every child gets at least one candy.
        arr = [1] * len(ratings)

        # Step 2: Forward pass - iterate from left to right
        # If the current child's rating is higher than the previous child's, give them one more candy.
        for i in range(1, len(ratings)):
            if ratings[i - 1] < ratings[i]:
                arr[i] = arr[i - 1] + 1  # Give one more candy than the previous child.

        # Step 3: Backward pass - iterate from right to left
        # If the current child's rating is higher than the child on their right,
        # give them more candies to maintain the rule.
        for i in range(len(ratings) - 2, -1, -1):
            if ratings[i + 1] < ratings[i]:
                arr[i] = max(arr[i], arr[i + 1] + 1)  # Ensure at least one more than the right child.

        # Step 4: Calculate the total sum of all candies in 'arr'.
        total_candies = sum(arr)

        # Step 5: Return the total sum of candies required.
        return total_candies
