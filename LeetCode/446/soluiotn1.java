// 446. Arithmetic Slices II - Subsequence
class Solution {
  public int numberOfArithmeticSlices(int[] nums) {
    int n = nums.length;

    int ans = 0;
    for(int i=0; i<n-1; i++) {
      for (int j=i+1; j<n; j++) {
        ans += fn(j, (long)nums[j]-(long)nums[i], nums, new int[n]);
      }
    }

    return ans;
  }

  private int fn(int i, long diff, int[] nums, int[] mem) {
    if (mem[i] != 0) return mem[i];

    int cnt = 0;
    for (int j=i+1; j<nums.length; j++) {
      if ((long)nums[j]-(long)nums[i] == diff) {
        cnt += 1 + fn(j, diff, nums, mem);
      }
    }

    return mem[i] = cnt;
  }
}