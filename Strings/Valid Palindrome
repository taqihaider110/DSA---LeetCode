class Solution {
public:
    bool isPalindrome(string s) {
        string str ;
        for (char c : s) {
            if (isalnum(c)) {
                str += tolower(c);
            }
        }
        string reversed = str;
        reverse(str.begin(), str.end());
        if (str == reversed) {
            return true;
        }
        return false;
    }
};