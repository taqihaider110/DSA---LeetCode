class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0;
        int tIndex = 0;

        // Traverse both strings
        while (sIndex < s.length() && tIndex < t.length()) {
            // If characters match, move to the next character in both 's' and 't'
            if (s[sIndex] == t[tIndex]) {
                sIndex++;
            }
            // Move to the next character in 't' regardless
            tIndex++;
        }

        // Check if all characters of 's' were found in 't' in the same relative order
        // If 'sIndex' reaches the end of 's', it means all characters of 's' were found in 't' in the correct order
        return sIndex == s.length();
    }
};
