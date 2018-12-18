#include <bits/stdc++.h>
using namespace std;
#define m 10000007

int a, b, c, d, e, f;
//Recursive soln
int fn( int n, int dp[] ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1) return dp[n];
    return dp[n]= (fn(n-1,dp)% m + fn(n-2,dp)% m + fn(n-3,dp)% m +
                   fn(n-4,dp)% m + fn(n-5,dp)% m + fn(n-6,dp))% m;
}
int main() {
    int n, cn=0, t;
    scanf("%d", &t);
    while(t--) {
        cin>>a>>b>>c>>d>>e>>f>>n;
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n", ++cn, fn(n,dp) % m);
    }
    return 0;
}
//Iterative soln
int main(){
    int n, cn=0, t;
    cin>>t;
    while(t--){
        scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&n);
        p[0]=a % m;
        p[1]=b % m;
        p[2]=c % m;
        p[3]=d % m;
        p[4]=e % m;
        p[5]=f % m;
        for(int i=6;i<=n;i++)
            p[i]=(p[i-1]+p[i-2]+p[i-3]+p[i-4]+p[i-5]+p[i-6]) % m;
        cout<<"Case "<<++cn<<": "<< p[n] % m<<endl;
 
    }
    return 0;
}
 
