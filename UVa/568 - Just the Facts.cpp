#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int fact[10004];
void preFacto(){
    int ans=1;
    for(int i=1;i<10004;i++){
        ans *= i;
        while(ans%10==0) ans/=10;
        ans%=100000;
        fact[i] = ans%10;
    }
}

int main(){
    preFacto();
    int n;
    while(sc(n)==1){
        printf("%5d -> %d\n",n,fact[n]);
    }
    return 0;
}