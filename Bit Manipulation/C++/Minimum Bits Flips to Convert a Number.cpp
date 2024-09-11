class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n) {
            count += (n & 1); // Increment count if the last bit is 1
            n >>= 1;          // Right shift n to check the next bit
        }
        return count;
    }
    // Function to find the minimum number of bit flips to convert a to b
    int minBitFlips(int a, int b) {
        // XOR between a and b to find differing bits
        int xorResult = a ^ b;
        // Count the number of set bits in xorResult
        return countSetBits(xorResult);
    }
};