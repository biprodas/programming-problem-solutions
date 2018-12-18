#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int n, m;
    while(scc(n,m)==2){
        lng ans = 1;
        for(int i=n; i>n-m; i--){
            ans *= i;
            while(ans%10==0) ans/=10;
            ans %= 10000000000;
        }
        printf("%lld\n", ans%10);
    }
    return 0;
}