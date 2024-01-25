// 1143. Longest Common Subsequence
class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        int[][]dp = new int[text1.length()+1][text2.length()+1];
        for (int i = 0; i < dp.length; i++) {
            Arrays.fill(dp[i], -1);
        }

        return solve(0, 0, text1, text2, dp);
    }

    private int solve(int i, int j, String str1, String str2, int[][] dp){
        if(i==str1.length() || j==str2.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        int ans = 0;
        if(str1.charAt(i)==str2.charAt(j)) {
            ans = 1 + solve(i+1, j+1, str1, str2, dp);
        }
        else {
            int ret1 = solve(i+1, j, str1, str2, dp);
            int ret2 = solve(i, j+1, str1, str2, dp);
            ans = Math.max(ret1, ret2);
        }

        return dp[i][j] = ans;
    }
}