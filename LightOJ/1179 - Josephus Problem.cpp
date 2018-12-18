/*
    Author    :  Biprodas Roy  [ Dept. of CSE, JUST ]
    Problem   :  LightOJ- 1179 - Josephus Problem
    Algorithm :  Math, Josephus Problem
*/
#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k){
    if(n==1) return 1;
    else return (josephus(n - 1, k) + k-1) % n + 1;
}
 
int main(){
    int t, n, k;
    cin>>t;
    for(int cs=1; cs<=t; cs++){
        cin>>n>>k;
        int lastman= josephus(n,k);
        printf("Case %d: %d\n",cs, lastman);
    }
    return 0;
}

/* or,
int call( int n ) {
    if( n == 1 ) return 0;
    return ( k + call(n-1) ) % n;
}
*/