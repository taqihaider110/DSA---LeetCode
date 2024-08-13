class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combination;
        sort(candidates.begin(), candidates.end());
        findCombinations(candidates, target, combination, 0, res);
        return res;
    }
    
private:
    void findCombinations(vector<int>& candidates, int target, vector<int>& combination, int start, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(combination);
            return;
        }
        
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i-1]) {
                // Skip duplicates
                continue;
            }
            
            if (candidates[i] > target) {
                // No need to continue if the current number is greater than the remaining target
                break;
            }
            
            combination.push_back(candidates[i]);
            findCombinations(candidates, target - candidates[i], combination, i + 1, res); // Move to the next element
            combination.pop_back();
        }
    }
};
