/*  
    Author	:  Biprodas Roy  [ CSE, JUST. ]
    Problem	:  LightOJ- 1067 - Combinations
    Algorithm 	:  Number Theory [Fctorial, nCr, Modular Inverse]
*/
#include <bits/stdc++.h>
using namespace std;
#define lng long long
#define pii pair<int, int>
#define MOD 1000003

int t, n, k;
lng factorial[1000006]={0};

void fact(int n) {
    factorial[0] = 1;
    for(int i=1; i<=n; ++i){
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

int nCr(int n, int r){
    int nr= (factorial[r] * factorial[n-r]) % MOD;
    int inv_nr= modInverse(nr, MOD);
    int ans= (factorial[n] * inv_nr) % MOD;
    return ans;
}

int main(){
    //freopen("in.txt","r",stdin);
    fact(1000004);
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        scanf("%d %d",&n, &k);
        int ans= nCr(n, k);
        printf("Case %d: %d\n", cs, ans);
    }


}