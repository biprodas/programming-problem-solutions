//[Iterative Approach, can not solve using Recursion]
#include<bits/stdc++.h>
using namespace std;
#define lng long long
#define sf(x) scanf("%d", &x)
#define sff(x, y) scanf("%d %d", &x, &y)
#define MOD 100000007

int coin[102], dp[10004];

int main(){
    int t, cs=0, n, k;
    sf(t);
    for(int cs=1; cs<=t; cs++){
        sff(n, k);
        for(int i=0;i<n;i++)
            sf(coin[i]);
            
        memset(dp, 0, sizeof(dp));
        
        dp[0] = 1;
        for(int i=0;i<n;i++){
            for(int j=coin[i]; j<=k; j++){
                dp[j] = (dp[j] +  dp[j-coin[i]]) % MOD;
            }
        }
        printf("Case %d: %d\n", cs, dp[k]);
    }
    return 0;
}