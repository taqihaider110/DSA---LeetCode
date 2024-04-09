class Solution {
public:
    double myPow(double x, int n) {
        // If power is 0, return 1
        if (n == 0) return 1;
        
        // If base is 0, return 0
        if (x == 0) return 0;

        // Initialize the result to 1
        double result = 1.0;
        
        // Convert n to long long to handle edge case when n = INT_MIN
        long long int power = n; 

        // If power is negative, invert x and make power positive
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        // Binary exponentiation algorithm
        while (power > 0) {
            // If power is odd, multiply result by x
            if (power % 2 == 1) {
                result *= x;
            }
            // Square x and halve power
            x *= x;
            power /= 2;
        }
        
        // Return the final result
        return result;
    }
};
// Let's dry run this test case:

// Given `x = 2.0` and `n = -2147483648`:

// 1. Since `n` is negative, we set `x` to `1 / x` (which becomes `0.5`) and make `n` positive (`n = 2147483648`).
// 2. We initialize `result` to `1.0`.
// 3. We enter the `while` loop because `power` (which is now `2147483648`) is greater than `0`.
// 4. Since `power` is odd (`2147483648 % 2 == 0`), we don't enter the if condition, and no multiplication occurs.
// 5. We update `x` to `x * x`, which becomes `0.5 * 0.5 = 0.25`.
// 6. We update `power` to `power / 2`, which becomes `2147483648 / 2 = 1073741824`.
// 7. We loop again because `power` is still greater than `0`.
// 8. Since `power` is even (`1073741824 % 2 == 0`), we don't enter the if condition, and no multiplication occurs.
// 9. We update `x` to `x * x`, which becomes `0.25 * 0.25 = 0.0625`.
// 10. We update `power` to `power / 2`, which becomes `1073741824 / 2 = 536870912`.
// 11. We continue this process until `power` reaches `1`, and then we perform one final multiplication.
// 12. Finally, we return `result`, which is the value after all the multiplications.

// In this case, due to the extremely large value of `n`, the loop will take a significant amount of time to reach `1`,
//  and eventually, the value of `x` will become too small, resulting in `0.0` as the output.