// 198. House Robber
// Approach: Recursive DP
class Solution {
    public int rob(int[] nums) {
        int[] dp = new int[nums.length+1];
        Arrays.fill(dp, -1);
        return solve(0, nums, dp);
    }

    int solve(int i, int[] nums, int[] dp){
        if(i>=nums.length) return 0;

        if(dp[i]!=-1) return dp[i];
        
        int pick = nums[i] + solve(i+2, nums, dp);
        int no_pick = solve(i+1, nums, dp);

        return dp[i] = Math.max(pick, no_pick);
    }
}