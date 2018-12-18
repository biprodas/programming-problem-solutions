#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

lng fact[14];
void preFacto(){
    fact[0]=1;
    for(int i=1;i<=13;i++){
        fact[i] = i*fact[i-1];
    }
}

int main(){
    preFacto();
    int n;
    while(sc(n)==1){
        if(n<0) n&1 ? printf("Overflow!\n") : printf("Underflow!\n") ;
        else { 
            if(n<=7) printf("Underflow!\n");
            else if(n>=14) printf("Overflow!\n");
            else printf("%lld\n", fact[n]);
        }
    }
}