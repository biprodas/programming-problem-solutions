/*
    Author    :  Biprodas Roy  [ Dept. of CSE, JUST ]
    Problem   :  LightOJ- 1102 - Problem Makes Problem
    Algorithm :  Combinatorics [Stars & Bars technique] + Number Theory
*/
#include <bits/stdc++.h>
using namespace std;
#define lng long long
#define pii pair<int, int>
#define MOD 1000000007
#define MX 2000006
 
lng factorial[MX]={0};
 
void fact() {
    factorial[0] = 1;
    for(int i=1; i<MX; ++i){
        factorial[i] = (i * factorial[i-1]) % MOD;
    }
}
 
pii extendedEuclid(int a, int b) {
    if(b == 0) return pii(1, 0);
    else{
        pii d = extendedEuclid(b, a % b);
        int x= d.second;
        int y= d.first - d.second * (a / b);
        return pii(x, y);
    }
}
int modInverse(int A, int M){
    pii mi= extendedEuclid(A, M);
    int x= mi.first;
    return (x % M + M) % M;
}
 
//Solution: (n+m-1)! / (n! * (m-1)!)
int nCm(int n, int m){
    int nm= (factorial[n] * factorial[m-1]) % MOD;
    int inv_nm= modInverse(nm, MOD);
    int ans= (factorial[n+m-1] * inv_nm) % MOD;
    return ans;
}
 
int main(){
    //freopen("in.txt","r",stdin);
    fact();
    int t;
    cin>>t;
 
    for(int cs=1;cs<=t;cs++){
        int n, m;
        scanf("%d %d",&n, &m);
        int ans= nCm(n, m);
        printf("Case %d: %d\n", cs, ans);
    }
 
    return 0;
}