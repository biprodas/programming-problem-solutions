//Rock-Climbing
#include<bits/stdc++.h>
using namespace std;
const int inf = 0x7f7f7f7f;
#define ll long long
 
int n;
int mb[203][203];
int dp[203][203];
 
int monkeyBanana(int i, int j){
    if(i>=1 && i<=2*n && j>=1 && j<=2*n){
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ret= -inf;
        ret= max(ret, mb[i][j]+monkeyBanana(i+1, j-1));
        ret= max(ret, mb[i][j]+monkeyBanana(i+1, j));
        ret= max(ret, mb[i][j]+monkeyBanana(i+1, j+1));
 
        return dp[i][j]= ret;
    }
    else return 0;
}
 
int main() {
    int t, cs=0;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        memset(mb,0,sizeof(mb));
        scanf("%d",&n);
        int i, j, k;
        for(i=1;i<=n;i++){
            for(j=1, k=n-i+1; j<=i; j++, k+=2){
                scanf("%d",&mb[i][k]);
            }
        }
        for(int c=2; i<=2*n-1; i++, c++){
            for( j=1, k=c;j<=2*n-i;j++,k+=2){
                scanf("%d",&mb[i][k]);
            }
        }
        int ans= monkeyBanana(1,n);
        printf("Case %d: %d\n", ++cs, ans);
    }
    return 0;
}