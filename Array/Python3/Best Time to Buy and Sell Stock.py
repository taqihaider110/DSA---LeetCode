from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # Initialize left pointer (buy day) and right pointer (sell day)
        l, r = 0, 1
        # Initialize variable to track maximum profit
        maxP = 0

        # Iterate through the prices array
        while r < len(prices):
            # If the price on the sell day is higher than the price on the buy day
            if prices[l] < prices[r]:
                # Calculate the profit by selling on the current day and buying on the buy day
                profit = prices[r] - prices[l]
                # Update maxP to keep track of the maximum profit
                maxP = max(maxP, profit)
            else:
                # If the price on the sell day is not higher than the buy day,
                # update the buy day to the sell day (no profit can be made until a lower price is found)
                l = r
            # Move the sell day pointer to the next day
            r += 1

        # Return the maximum profit obtained
        return maxP
