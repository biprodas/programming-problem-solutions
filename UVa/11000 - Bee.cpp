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
    int n;
    preFibo();
    while(sc(n) && n>=0){
        cout<<fib[n]-1<<" "<<fib[n+1]-1<<endl;
    }
    return 0;
}