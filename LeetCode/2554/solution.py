# 2554. Maximum Number of Integers to Choose From a Range I

class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        banned_set = set(banned)
        sum, cnt = 0, 0

        for i in range(1, n + 1):
            if i in banned_set:
                continue
            if sum + i > maxSum:
                return cnt
            sum += i
            cnt += 1

        return cnt