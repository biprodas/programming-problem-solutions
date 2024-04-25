// 2370. Longest Ideal Subsequence
class Solution {
public:
    int dp[100005][27];

    int longestIdealString(string s, int k) {
        int n = s.length();
        memset(dp, -1, sizeof(dp));
        return solve(n-1, 26, s, k);
    }

    int solve(int i, int c, string& s, int k) {
        if(i<0) return 0;
        if(dp[i][c] != -1) return dp[i][c];

        char ch = c+'a';
        int take = 0;

        if(c == 26 || abs(ch-s[i]) <= k){
            take = 1 + solve(i-1, s[i]-'a', s, k);
        }
        int notTake = solve(i-1, c, s, k);

        return dp[i][c] = max(take, notTake);        
    }
};