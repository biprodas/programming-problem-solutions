/*  
    Author	:  Biprodas Roy  [ CSE, JUST. ]
    Problem	:  LightOJ- 1054 - Efficient Pseudo Code
    Algorithm 	:  Number Theory [Prime Factor, Binary Exp. Modulo, Modular Inverse]
    Complexity	:  O(sqrt(n))
*/
#include <bits/stdc++.h>
using namespace std;
#define lng long long
#define pii pair<int, int>
#define MOD 1000000007
#define MX 46346    //sqrt(MAX_INT)

vector<int> primes;

void sieve(){
    int flag[MX]={0};
    for(int i=3; i*i<=MX; i+=2){
        if(!flag[i])
            for(int j=i*i; j<MX; j+=2*i)
                flag[j]=1;
    }
    primes.push_back(2);
    for(int i=3; i<=MX; i+=2) if(!flag[i]) primes.push_back(i);
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

lng binExpMod(lng x, lng n, lng M)
{
    if(n == 0) return 1;
    lng ret = binExpMod(x, n >> 1, M);
    if(n & 1) return (((ret % M) * (ret % M))%M * (x % M)) % M;
    return ((ret % M) * (ret % M)) % M;
}


lng sumDivisors(int n, int m){
    lng res = 1;
    int sz= primes.size();

    for(int i = 0; i<sz && primes[i]*primes[i] <= n; ++i) {
        if(n % primes[i] == 0) {
            lng pw = 0;

            while(n % primes[i] == 0)
                n /= primes[i], ++pw;

            pw *= m;

            res *= (((binExpMod(primes[i], pw+1, MOD) + (-1+MOD)) % MOD) * modInverse(primes[i]-1, MOD)) % MOD;
            res %= MOD;
        }
    }

    if(n != 1) {
        res *= (((binExpMod(n, m+1LL, MOD) + (-1+MOD)) % MOD) * modInverse(n-1, MOD)) % MOD;
        res %= MOD;
    }

    return res;
}

int main(){
    //freopen("in.txt", "r", stdin);

    sieve();

    int t;
    scanf("%d", &t);

    for(int cs=1; cs<=t; cs++) {
        int n, m;
        scanf("%d %d", &n, &m);
        lng result= sumDivisors(n, m);
        printf("Case %d: %lld\n", cs, result);
    }

    return 0;
}
