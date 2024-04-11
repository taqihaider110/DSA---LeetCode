class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // If there are no prices or only one price, return 0 (cannot make a profit)
        if (prices.size() <= 1) return 0; 
        
        // Initialize left pointer (buy day) and right pointer (sell day)
        int l = 0; 
        int r = 1;
        
        // Initialize variable to track maximum profit
        int maxP = 0;
        
        // Iterate through the prices array
        while (r < prices.size()) {
            // If the price on the sell day is higher than the buy day
            if (prices[l] < prices[r]) {
                // Calculate the profit by selling on the current day and buying on the buy day
                int profit = prices[r] - prices[l];
                // Update maxP to keep track of the maximum profit
                maxP = max(maxP, profit);
            } else {
                // If the price on the sell day is not higher than the buy day,
                // update the buy day to the sell day (no profit can be made until a lower price is found)
                l = r;
            }
            // Move the sell day pointer to the next day
            r += 1;
        }
        // Return the maximum profit obtained
        return maxP;
    }
};
