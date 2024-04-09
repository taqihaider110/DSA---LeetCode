class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        rev = 0
        original = x
        while x != 0:
            digit = x % 10
            rev = rev * 10 + digit
            x //= 10
        return original == rev

sol = Solution()  # Create an instance of Solution class
x = sol.isPalindrome(121)  # Call the isPalindrome method using the instance
print(x)
