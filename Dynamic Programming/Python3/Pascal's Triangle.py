from math import factorial
from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 1:
            return [[1]]

        result = []
        for i in range(numRows):
            row = []
            for j in range(i + 1):
                coefficient = factorial(i) // (factorial(j) * factorial(i - j))
                row.append(coefficient)
            result.append(row)

        return result
