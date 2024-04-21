class Solution:
    def isPalindrome(self, s: str) -> bool:  # Corrected with 'self'
        str_clean = ""
        for c in s:
            if c.isalnum():  # Keep only alphanumeric characters
                str_clean += c.lower()  # Convert to lowercase
        
        reversed_str = str_clean[::-1]  # Reverse the cleaned string
        
        return str_clean == reversed_str  # Check if it's a palindrome
