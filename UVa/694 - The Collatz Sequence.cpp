#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int collatz(lng A, lng L){
    int cnt = 0;
    while(A!=1 && A<=L){
        A = A&1 ? 3*A + 1 : A/2;
        cnt++;
    }
    if(A==1) cnt++;
    return cnt;
}

int main(){
    int A, L, cs=0;
    while(scc(A,L)==2){
        if(A<0 && L<0) break;
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n", ++cs, A, L, collatz(A,L));
    }
    return 0;
}