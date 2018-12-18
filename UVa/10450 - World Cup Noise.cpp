#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)

long long fib[55];

void preFibo(){
    fib[0] = 1, fib[1] = 2;
    for(int i=2;i<55;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main(){
    int t, n, cs=0;
    preFibo();
    sc(t);
    while(t--){
        sc(n);
        printf("Scenario #%d:\n%lld\n\n", ++cs, fib[n]);
    }
    return 0;
}