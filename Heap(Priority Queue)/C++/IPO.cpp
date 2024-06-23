class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        // Min-heap for projects by capital required
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minCapital;
        // Max-heap for profits
        priority_queue<int> maxProfit;
        
        // Pair up capital and profits and push to min-heap
        for (int i = 0; i < capital.size(); i++) {
            minCapital.push({capital[i], profits[i]});
        }

        for (int i = 0; i < k; i++) {
            // Move all affordable projects to the max-heap
            while (!minCapital.empty() && minCapital.top().first <= w) {
                maxProfit.push(minCapital.top().second);
                minCapital.pop();
            }

            // If no project can be undertaken, break
            if (maxProfit.empty()) {
                break;
            }

            // Take the most profitable project
            w += maxProfit.top();
            maxProfit.pop();
        }
        
        return w;
    }
};