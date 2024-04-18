class Solution:
    def romanToInt(self, s: str) -> int:
        # Dictionary to map Roman numerals to their corresponding integer values
        roman_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        
        # Initialize variables
        result = 0
        prev_value = 0
        
        # Iterate over the input string in reverse
        for i in range(len(s) - 1, -1, -1):
            # Get the integer value corresponding to the current Roman numeral
            value = roman_dict.get(s[i], 0)  # Default to 0 if character not found
            if value == 0:  # Invalid character
                return 0
            
            # Decide whether to add or subtract the current value based on previous value
            if value < prev_value:
                result -= value
            else:
                result += value
            
            # Update prev_value for the next iteration
            prev_value = value
        
        # Return the final result
        return result

# Example usage:
solution = Solution()
print(solution.romanToInt("III"))      # Output: 3
print(solution.romanToInt("IV"))       # Output: 4
print(solution.romanToInt("IX"))       # Output: 9
print(solution.romanToInt("LVIII"))    # Output: 58
print(solution.romanToInt("MCMXCIV"))  # Output: 1994
