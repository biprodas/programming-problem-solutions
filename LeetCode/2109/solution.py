# 2109. Adding Spaces to a String
class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        n, m = len(s), len(spaces)
        result = ""
        j = 0

        for i in range(n):
            if j < m and i == spaces[j]:
                result += ' '
                j += 1
            result += s[i]

        return result