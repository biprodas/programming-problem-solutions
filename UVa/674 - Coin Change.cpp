#include <bits/stdc++.h>
using namespace std;
#define M 7490
int coin[]={50, 25, 10, 5, 1};
int dp[5][M];
int make;

int call(int i, int amount){
    if(i==5){
        return amount==0? 1 : 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    
    int ret1=0, ret2=0;
    if(amount-coin[i]>=0)
        ret1= call(i,amount-coin[i]); //try to take coin i again
    ret2= call(i+1, amount); //don't take coin i. try next
    
    return dp[i][amount]= ret1+ret2;
}

int main(){
    memset(dp,-1,sizeof(dp));
    while(cin>>make){
        cout<<call(0, make)<<endl;
    }
    return 0;   
}