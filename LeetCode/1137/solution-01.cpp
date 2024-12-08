// 1137. N-th Tribonacci Number
// Time: O(n)
// Space: O(n)
class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n<=2) return 1;
        
        vector<int> dp(n+1);
        dp[1] = 1;
        dp[2] = 1;
        
        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        
        return dp[n];    
    }
};