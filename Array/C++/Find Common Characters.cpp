class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        if (words.empty())
            return {};

        // Initialize cnt with the character counts of the first word
        vector<int> cnt(26, 0);
        for (char c : words[0]) {
            cnt[c - 'a']++;
        }

        // Update cnt to keep the minimum count of each character in all words
        for (size_t i = 1; i < words.size(); ++i) {
            vector<int> cur_cnt(26, 0);
            for (char c : words[i]) {
                cur_cnt[c - 'a']++;
            }
            for (int j = 0; j < 26; ++j) {
                cnt[j] = min(cnt[j], cur_cnt[j]);
            }
        }

        // Create the result vector based on the final counts
        vector<string> res;
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < cnt[i]; ++j) {
                res.push_back(string(1, 'a' + i));
            }
        }
        return res;
    }
};