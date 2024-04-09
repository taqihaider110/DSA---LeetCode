class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x;
        // x = num + 2*t;
        x = num + t + t;
        return x;
    }
};