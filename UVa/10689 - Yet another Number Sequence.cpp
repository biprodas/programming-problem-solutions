#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)

int N = 15000;
int fib[15005];

void preFibo(){
    fib[0] = 0, fib[1] = 1;
    for(int i=2;i<N+5;i++){
        fib[i] = (fib[i-1] + fib[i-2]) % 10000;
    }
}

int main(){
    int t, a, b, m; long long n;
    preFibo();
    sc(t);
    while(t--){
        scc(a,b); cin>>n>>m;
        int M = pow(10,m), ans;
        if(n%N==0) ans = a%M;
        else ans = ((fib[n%N]*b)%M + (fib[(n-1)%N]*a)%M) % M;
        printf("%d\n", ans);
    }
    return 0;
}