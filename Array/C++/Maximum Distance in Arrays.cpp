class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_val = arrays[0].front(); // Initialize to the first element of the first array
        int max_val = arrays[0].back();  // Initialize to the last element of the first array
        int max_distance = 0;

        for (int i = 1; i < arrays.size(); ++i) {
            // Compare current array's first element with max_val and last element with min_val
            max_distance = std::max(max_distance, std::max(abs(arrays[i].back() - min_val), abs(max_val - arrays[i].front())));
            
            // Update min_val and max_val for the next iteration
            min_val = std::min(min_val, arrays[i].front());
            max_val = std::max(max_val, arrays[i].back());
        }

        return max_distance;
    }
};
