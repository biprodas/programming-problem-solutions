//Matrix Chain Multiplication
#include <bits/stdc++.h>
using namespace std;

int ar[55], dp[55][55];

int cutStick(int be, int en){
    if(be+1 == en) return 0;
    if(dp[be][en]!=-1) return dp[be][en];
    
    int minCost= INT_MAX;
    //try all possible cutting point
    for(int mid=be+1; mid<en; mid++){
        int cutCost= cutStick(be, mid) + cutStick(mid, en) + (ar[en]-ar[be]);
        minCost= min(minCost, cutCost);
    }
    
    return dp[be][en]= minCost;
}


int main(){
    int n, len;
    while(1){
        cin>>len;
        if(len==0) break;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>ar[i];
        ar[0]=0, ar[n+1]= len;
        
        memset(dp, -1, sizeof(dp));
        
        int ans= cutStick(0, n+1);
        
        printf("The minimum cutting is %d.\n", ans);
    }
    
    return 0;
}