#include <bits/stdc++.h>
using namespace std;

int grid[17][17];
int dp[17][17]={0};
int n;

int call(){
    int mx=0;
    dp[1][1]=grid[1][1];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++) {
            dp[i][j] = grid[i][j] + max(dp[i-1][j-1], dp[i-1][j]); 
            mx= max(mx, dp[i][j]);
        }
    }
    return mx;
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) 
            cin>>grid[i][j];
    }
    cout<<call();
    
}

/* Answer : 1074 */