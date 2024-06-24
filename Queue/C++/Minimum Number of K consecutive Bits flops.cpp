class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> flipped(n);  // To keep track of flips
        int flipCount = 0;

        for (int i = 0; i < n; ++i) {
            if (i >= k) {
                flipCount -= flipped[i - k];
            }

            if ((nums[i] + flipCount) % 2 == 0) {  // nums[i] needs flipping
                if (i + k > n) return -1;  // If not enough space for flip
                ++count;
                ++flipCount;
                flipped[i] = 1;
            }
        }

        return count;
    }
};
