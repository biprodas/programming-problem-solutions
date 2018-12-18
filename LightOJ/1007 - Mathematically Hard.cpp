/*  
    Author	:  Biprodas Roy  [ CSE, JUST. ]
    Problem	:  LightOJ- 1007 - Mathematically Hard
    Algorithm 	:  Number Theory [Euler Totient Function]
*/
#include <bits/stdc++.h>
using namespace std;
#define lng long long
#define ull unsigned long long 
#define M 5000006
ull phi[M];

void prePhi(){
    for (int i=1; i<M; i++){
        phi[i] = i;
    }
    for(int p=2; p<M; p++){
        if (phi[p] == p) {
            for (int k=p; k<M; k+=p){
                phi[k] -= phi[k] / p;
            }
        }
    }
    phi[0]=0;
    for(int i=1;i<M;i++){
        phi[i]= phi[i-1] + phi[i]*phi[i];
    }
}

int main() {
    int t, a, b;
    prePhi();
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        scanf("%d %d",&a, &b);
        ull ans= phi[b]-phi[a-1];
        printf("Case %d: %llu\n", cs, ans);
    }

    return 0;
}