//DP- CoinChange problem
#include<bits/stdc++.h>
using namespace std;
int dp[11][201];
int make= 200;
int n=8;
int coin[]={1, 2, 5, 10, 20, 50, 100, 200}; //n==8
int coinChange(int i, int ammount){ 
    if(i==n){
        if(ammount==0)return 1;
        else return 0;
    }
    if(dp[i][ammount]!=-1) return dp[i][ammount];

    int ans1=0, ans2=0;
    if(ammount-coin[i]>=0)
        ans1=coinChange(i,ammount-coin[i]);
    ans2=coinChange(i+1,ammount);

    return dp[i][ammount]=ans1+ans2;
}
int main(){
    memset(dp,-1,sizeof(dp));
    cout<<coinChange(0,make);
return 0;
}
