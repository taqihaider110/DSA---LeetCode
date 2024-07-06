class Solution {
public:
    int passThePillow(int n, int time) {
        int num = 1;
        int direction = 1; // 1 means forward, -1 means backward

        while (time != 0) {
            num += direction;
            if (num == 1 || num == n) {
                direction = -direction; // Change direction
            }
            time--;
        }
        return num;
    }
};