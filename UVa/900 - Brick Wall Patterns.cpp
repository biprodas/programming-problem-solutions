#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)

long long fib[55];

void preFibo(){
    fib[1] = 1, fib[2] = 2;
    for(int i=3;i<55;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main(){
    int n;
    preFibo();
    while(sc(n) && n){
        printf("%d\n",fib[n]);
    }
    return 0;
}