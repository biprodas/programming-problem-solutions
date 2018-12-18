#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int bs(lng n){
    lng lo=4, hi=1000000009, mid;
    while(lo < hi){
        lng mid = (lo+hi)/2;
        if(mid * (mid-3) >= n*2) hi= mid;
        else lo= mid+1;
    }
    return (int)lo;
}

int main(){
    int cs=0;
    lng n;
    while(cin>>n && n){
        printf("Case %d: %d\n", ++cs, bs(n));
    }
}

/*
Number of diagonal in N-gon is: (N * (N-3) ) / 2.
so,     (N * (N-3)) / 2 = X
    =>  N2 – 3*N – 2*X = 0
We know, X = (–b + sqrt(b^2 – 4*a*c)) / 2*a
*/