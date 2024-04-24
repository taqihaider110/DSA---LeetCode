class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int a = *max_element(candies.begin(), candies.end()); 
        vector<bool> d(candies.size(), false);
        for (int i = 0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= a) {
                d[i] = true;
            }
        }
        return d;
    }
};