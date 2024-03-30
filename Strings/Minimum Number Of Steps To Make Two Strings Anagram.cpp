class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> m;
        for (char c : s) {
            m[c]++;
        }
        for (char c : t) {
            m[c]--;
        }
        int steps = 0;
        for (auto it : m) {
            steps += abs(it.second);
        }
        return steps/2;
    }
};