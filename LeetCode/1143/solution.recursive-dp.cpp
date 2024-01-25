// 1143. Longest Common Subsequence
class Solution {
public:
    string str1, str2;
    int len1, len2;
    vector<vector<int>> dp;

    int longestCommonSubsequence(string text1, string text2) {
        str1 = text1;
        str2 = text2;
        len1 = text1.size();
        len2 = text2.size();

        dp.assign(len1, vector(len2, -1));

        return solve(0, 0);
    }

    int solve(int i, int j){
        if(i==len1 || j==len2) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        int ans=0;
        if(str1[i]==str2[j]) 
            ans = 1 + solve(i+1, j+1);
        else 
            ans = max(solve(i+1, j), solve(i, j+1));

        return dp[i][j] = ans;
    }
};