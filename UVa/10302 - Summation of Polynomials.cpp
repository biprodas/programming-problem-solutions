#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long
#define MX 50005

lng dp[MX];
void pre(){
    dp[1] = 1;
    for(lng i=2; i<MX; i++){
        dp[i] = dp[i-1] + i*i*i;
    }
}

int main(){
    pre();
    int n;
    while(sc(n)==1){
        printf("%lld\n", dp[n]);
    }
    return 0;
}