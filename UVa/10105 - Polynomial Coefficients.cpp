#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

/* Coefficient = n!/(n1! n2! n3!...) */

int fact[13];
void facto(){
    fact[0] = 1;
    for(int i=1; i<13; i++){
        fact[i] = i*fact[i-1];
    }
}

int main(){
    facto();
    int n, k, x;
    while(scc(n,k)==2){
        int p = 1;
        for(int i=1; i<=k; i++){
            sc(x);
            p *= fact[x];
        }
        printf("%d\n", fact[n]/p);
    }
    return 0;
}