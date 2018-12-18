#include<bits/stdc++.h>
using namespace std;
#define lng long long
int make;
int coin[21];
lng dp[21][10001];

void pre(){
    for(int i=1;i<=21;i++){
        coin[i-1]= i*i*i;
    }
}
lng call(int i, int amount){
    if(i==21)
        return amount==0? 1: 0;
    if(dp[i][amount]!=-1)
        return dp[i][amount];

    lng ret=0;
    if(amount-coin[i]>=0)
        ret+= call(i,amount-coin[i]);
    ret+= call(i+1, amount);

    return dp[i][amount]= ret;
}
int main(){
    pre();
    memset(dp,-1,sizeof(dp));
    while(cin>>make){
        cout<<call(0,make)<<endl;
    }
    
    return 0;
}
