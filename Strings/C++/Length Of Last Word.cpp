class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
            } else if (count > 0) {
                // If count is already non-zero and we encounter a space,
                // it means we have found the last word, so we break the loop
                break;
            }
        }
        return count;
    }
};