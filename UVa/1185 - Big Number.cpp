#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long
#define MX 10000007

/* log(n!) = log(n*(n-1)*...*1 = log(n)+log(n-1)+...+log(1) */

double dp[MX];
void pre(){
    dp[1] = 1;
    for(int i=2; i<MX; i++){
        dp[i] = dp[i-1] + log10(i);
    }
}

int main(){
    pre();
    int t, n;
    sc(t);
    while(t--){
        sc(n);
        printf("%d\n", (int)dp[n]);
    }
    return 0;
}