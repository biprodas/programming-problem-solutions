#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

lng fib[83];

void preFibo(){
    fib[1]=1, fib[2]=2;
    for(int i=3;i<83;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
}

int main(){
    preFibo();
    int n;
    while(sc(n) && n){
        printf("%lld\n",fib[n]);
    }
    return 0;
}