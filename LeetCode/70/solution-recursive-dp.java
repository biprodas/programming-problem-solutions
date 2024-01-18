// 70. Climbing Stairs
class Solution {
    public int climbStairs(int n) {
        int[] dp = new int[n + 1];
        Arrays.fill(dp, -1);
        return fn(n, dp);   
    }

    private int fn(int n, int[] dp){
        if(n<0) return 0;
        if (n==0) return 1;
        
        if(dp[n]!=-1) return dp[n];

        dp[n] = fn(n-1, dp) + fn(n-2, dp);

        return dp[n];
    }
}