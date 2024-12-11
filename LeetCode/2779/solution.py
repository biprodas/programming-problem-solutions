# 2779. Maximum Beauty of an Array After Applying Operation
class Solution:
    def maximumBeauty(self, nums: List[int], k: int) -> int:
        nums.sort()

        n = len(nums)
        j, ans = 0, 0

        for i in range(n):
            while j<n and nums[j]-nums[i] <= 2*k:
                j += 1
            ans = max(ans, j-i)

        return ans