class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int ans = x;
        if (x < 0) {
            return false;
        }
        long long int num;
        while (ans != 0) {
            int rem = ans % 10;
            num = num * 10 + rem;
            ans /= 10;
        }
        if (num == x) {
            return true;
        } else {
            return false;
        }
    }
};