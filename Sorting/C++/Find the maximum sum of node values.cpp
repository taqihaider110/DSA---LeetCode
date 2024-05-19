class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k,vector<vector<int>>& edges) {
        int changes = 0;
        long long min_sacrifice = LLONG_MAX;
        long long final_sum = 0;

        for (int val : nums) {
            long long tmp = static_cast<long long>(val) ^ k;
            if (tmp > val) {
                changes++;
                final_sum += tmp;
                // cost of not changing this node
                min_sacrifice = std::min(min_sacrifice, tmp - val);
            } else {
                final_sum += val;
                // cost of changing this node
                min_sacrifice =
                    std::min(min_sacrifice, static_cast<long long>(val) - tmp);
            }
        }
        if (changes % 2 != 0) {
            final_sum -= min_sacrifice;
        }

        return final_sum;
    }
};