//DP- CoinChange problem (same as problem-031)
#include<bits/stdc++.h>
using namespace std;
int ar[102], dp[102][102];
int n=100;

int ways(int i, int amount){
    if(i==n) return amount==0 ? 1 : 0;
    if(dp[i][amount]!=-1) return dp[i][amount];

    int ret=0;
    if(amount-ar[i]>=0)
        ret += ways(i, amount-ar[i]);
    ret += ways(i+1, amount);

    return dp[i][amount] = ret;
}

int main(){
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++) ar[i]= i;
    cout<<ways(1, n);
    return 0;
}

/* Answer : 190569291 */