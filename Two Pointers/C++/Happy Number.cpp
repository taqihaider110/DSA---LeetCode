class Solution {
public:
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;  // Tortoise pointer
        int fast = sumOfSquares(n);  // Hare pointer

        while (fast != 1 && slow != fast) {
            slow = sumOfSquares(slow);  // Tortoise moves one step
            fast = sumOfSquares(sumOfSquares(fast));  // Hare moves two steps
        }

        return fast == 1;  // If fast reaches 1, it's a happy number
    }
};
class Solution {
public:
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;  // Tortoise pointer
        int fast = sumOfSquares(n);  // Hare pointer

        while (fast != 1 && slow != fast) {
            slow = sumOfSquares(slow);  // Tortoise moves one step
            fast = sumOfSquares(sumOfSquares(fast));  // Hare moves two steps
        }

        return fast == 1;  // If fast reaches 1, it's a happy number
    }
};
