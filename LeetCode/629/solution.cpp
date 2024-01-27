// 629. K Inverse Pairs Array
class Solution {
public:
    int dp[1001][1001];
    int mod = 1e9+7;

    int kInversePairs(int n, int k) {
        memset(dp, -1, sizeof(dp));
        return fn(n, k);
    }

    long fn(int n, int k){
        if (k==0) return 1;
        if (n<=0 || k<0) return 0;
        if(dp[n][k]!=-1) return dp[n][k];

        long ans = (fn(n-1, k) + fn(n, k-1) - fn(n-1, k-n) + mod) % mod;
        
        return dp[n][k] = ans;
    }
};