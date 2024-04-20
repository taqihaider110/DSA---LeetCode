from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        n = len(strs)  # Get the size of the input list
        if n == 0:  # If the list is empty, return an empty string
            return ""
        
        if n == 1:  # If there's only one string, return it as the common prefix
            return strs[0]

        strs.sort()  # Sort the list of strings

        # Find the minimum length between the first and last strings
        en = min(len(strs[0]), len(strs[-1]))

        # Compare the first and last strings character by character
        first = strs[0]  # First string in the sorted list
        last = strs[-1]  # Last string in the sorted list
        i = 0  # Pointer for the character comparison
        while i < en and first[i] == last[i]:  # While characters match and within the minimum length
            i += 1  # Increment to check the next character

        # The common prefix from the first character to the first mismatch
        pre = first[:i]
        return pre
