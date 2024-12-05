# 2337. Move Pieces to Obtain a String
class Solution:
    def canChange(self, start: str, target: str) -> bool:
        n = len(start)
        i, j = 0, 0
    
        while i < n or j < n:
            while i < n and start[i] == '_':
                i += 1
            while j < n and target[j] == '_':
                j += 1

            if i==n or j==n:
                return i==j

            if start[i] != target[j]:
                return False

            if start[i]=='L' and i<j:
                return False
            if start[i]=='R' and i>j:
                return False

            i += 1
            j += 1

        return True