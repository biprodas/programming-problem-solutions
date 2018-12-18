#include<bits/stdc++.h>
using namespace std;
int MOD= 100000007;
int dp[51][1001];
int n, make;
int ar[51], cr[51];

int call(int i, int amount){
        if(i==n) return amount==make ? 1 : 0;
        if(dp[i][amount]!=-1) return dp[i][amount];

        int ret=0;
        for(int k=1;k<=cr[i];k++){
            if(amount+ar[i]*k<=make)
                ret+= call(i+1, amount+ar[i]*k)%MOD;
            else break;
        }
        ret+=call(i+1, amount)%MOD;
        return dp[i][amount]= ret %MOD;
}
int main(){
        freopen("in.txt","r",stdin);
        int t, cs=0;
        cin>>t;
        while(t--){
                memset(dp,-1, sizeof(dp));
                cin>>n>>make;
                for(int i=0;i<n;i++){
                    cin>>ar[i];
                }
                for(int i=0;i<n;i++){
                    cin>>cr[i];
                }

                int ret=call(0, 0)%MOD;
                printf("Case %d: %d\n",++cs, ret);
        }
}


//ITERATIVE VERSION (jan)
    while( cases-- ) {
        scanf("%d %d", &n, &K);
 
        for( int i = 0; i < n; i++ ) scanf("%d", &A[i]);
        for( int i = 0; i < n; i++ ) scanf("%d", &C[i]);
 
        memset( d, 0, sizeof(d) );
        d[0] = 1;
        for( int i = 0; i < n; i++ ) {
            for( int j = K; j >= 0; j-- ) {
                int s = j;
                for( int k = 0; k < C[i]; k++ ) {
                    s += A[i];
                    if( s > K ) break;
                    d[s] = ( d[s] + d[j] ) % MOD;
                }
            }
        }
        printf("Case %d: %d\n", ++caseno, d[K]);
    }