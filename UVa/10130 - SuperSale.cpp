#include <bits/stdc++.h>
using namespace std;
#define M 1001
int CAP, t, n, p;
int cost[M];
int wt[M];
int dp[M][31];

int call(int i, int w){
    if(i==n) return 0; //base case
    if(dp[i][w]!=-1) return dp[i][w];
    
    int profit1=0, profit2=0;
    if(w-wt[i]>=0)
        profit1= cost[i]+call(i+1,w-wt[i]);
    profit2= call(i+1,w);
    return dp[i][w]= max(profit1, profit2);
}

int main(){
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>cost[i]>>wt[i];
        }
        int sum=0;
        cin>>p;
        while(p--){
            //memset(dp,-1,sizeof(dp));
            cin>>CAP;
            sum+= call(0,CAP);
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}