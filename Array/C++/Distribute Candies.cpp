class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // Create a set to find the unique candy types
        set<int> uniqueCandies(candyType.begin(), candyType.end());
        
        // Calculate the maximum candies that can be distributed to one person
        int maxCandies = candyType.size() / 2;
        
        // The answer is the minimum between the unique candy types and maxCandies
        return min((int)uniqueCandies.size(), maxCandies);
    }
};
