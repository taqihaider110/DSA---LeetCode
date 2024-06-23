class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<pair<double, int>> workers; 
        
        for (int i = 0; i < n; ++i) {
            double ratio = static_cast<double>(wage[i]) / quality[i];
            workers.push_back({ratio, quality[i]});
        }
        
        sort(workers.begin(), workers.end());
        
        priority_queue<int> maxQualities;
        int qualitySum = 0; 
        double minTotalWage = numeric_limits<double>::max(); 
        
        for (auto& worker : workers) {
            double ratio = worker.first;
            int currentQuality = worker.second;
            
            maxQualities.push(currentQuality);
            qualitySum += currentQuality;
            
            if (maxQualities.size() > k) {
                int maxQuality = maxQualities.top();
                maxQualities.pop();
                qualitySum -= maxQuality;
            }
            
            if (maxQualities.size() == k) {
                minTotalWage = min(minTotalWage, qualitySum * ratio);
            }
        }
        
        return minTotalWage;
    }
};