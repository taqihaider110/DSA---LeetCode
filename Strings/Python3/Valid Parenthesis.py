class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        parens = {')': '(', ']': '[', '}': '{'}

        for c in s:
            if c in parens:
                if not stack:
                    return False
                if stack[-1] != parens[c]:
                    return False
                stack.pop()
            else:
                stack.append(c)

        return not stack        