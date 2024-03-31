class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        if (x < 0) {
            return false;
        }
        int original = x;
        while (x != 0) {
            x = x % 10;
            rev = rev * 10 + x;
            x = x / 10;
        }
        if (original == rev)
            return true;
        else
            return false;
    }
};