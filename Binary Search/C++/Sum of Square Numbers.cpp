class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low = 0;
        long long high = static_cast<int>(sqrt(c));
        while (low <= high) {
            long long sum = low * low + high * high;
            if (sum == c) {
                return true;
            }
            if (sum > c) {
                high--;
            } else {
                low++;
            }
        }
        return false;
    }
};