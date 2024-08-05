class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        // Count the frequency of each element
        for (auto i : nums) {
            mp[i]++;
        }
        
        int max_count = 0;r
        // Find the maximum frequency
        for (auto i : mp) {
            if (i.second > max_count) {
                max_count = i.second;
            }
        }
        
        int count = 0;
        // Count the number of elements with the maximum frequency
        for (auto i : nums) {
            if (mp[i] == max_count) {
                count++;
            }
        }
        
        return count;
    }
};
