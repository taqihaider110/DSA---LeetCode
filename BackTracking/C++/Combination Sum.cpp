class Solution {
public:
    void findNumbers(vector<int>& ar, int sum, vector<vector<int>>& res,
                     vector<int>& r, int i) {
        // if we get exact answer
        if (sum == 0) {
            res.push_back(r);
            return;
        }

        // Recur for all remaining elements that
        // have value smaller than sum.
        while (i < ar.size() && sum - ar[i] >= 0) {

            // Till every element in the array starting
            // from i which can contribute to the sum
            r.push_back(ar[i]); // add them to list

            // recursive call for next numbers
            findNumbers(ar, sum - ar[i], res, r, i);
            i++;

            // Remove number from list (backtracking)
            r.pop_back();
        }
    }

    // Returns all combinations
    // of ar[] that have given
    // sum.
    vector<vector<int>> combinationSum(vector<int>& ar, int sum) {
        // sort input array
        sort(ar.begin(), ar.end());

        // remove duplicates
        ar.erase(unique(ar.begin(), ar.end()), ar.end());

        vector<int> r;
        vector<vector<int>> res;
        findNumbers(ar, sum, res, r, 0);

        return res;
    }
};