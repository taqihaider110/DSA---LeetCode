class Solution {
public:
    bool validPalindrome(string s) {
        int len = s.length() - 1;
        int check = 0;
        
        // Two pointers starting from the beginning and end of the string
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] == s[len]) {
                len--;
            } else {
                // If a mismatch is found, try skipping one character
                // Check both possibilities: skip character at `i` or `len`
                return isPalindromeInRange(s, i + 1, len) || isPalindromeInRange(s, i, len - 1);
            }
        }
        return true;
    }
    
private:
    bool isPalindromeInRange(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
