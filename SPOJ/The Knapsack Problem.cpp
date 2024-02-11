#include<bits/stdc++.h>
using namespace std;
 
int cap, n;
int sz[2003], val[2003];
int dp[2003][2003];
int knapsack(int i, int s){
    if(i>n) return 0; //all item have been taken
    if(dp[i][s]!=-1) return dp[i][s];
    
    int ans1=0, ans2=0;
    if(s+sz[i]<=cap) ans1= val[i]+knapsack(i+1, s+sz[i]);
    
    ans2= knapsack(i+1, s);
    return dp[i][s]= max(ans1, ans2);
}
int main(){
    cin>>cap>>n;
    for(int i=1;i<=n;i++){
        cin>>sz[i]>>val[i];
    }
    memset(dp,-1,sizeof(dp));
 
    
    cout<<knapsack(1, 0);
}
 