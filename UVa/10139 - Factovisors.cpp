#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

bool prime[1000006];
vector<int>primes;

void sieve(){
    for(int i=2; i<=1000000; i++){
        if(prime[i] == false){
            primes.push_back(i);
            for(int j = i+i; j<=1000000; j+=i)
                prime[j] = true;
        }
    }
}

int solve(int n, int m){
    int sz = primes.size();
    for(int i=0; i<sz && primes[i]*primes[i] <= m; i++){
        if(m % primes[i] == 0){
            int cnt = 0;
            while(m % primes[i] == 0){
                cnt++;
                m /= primes[i];
            }
            lng tmp = primes[i], cnt2 = 0;
            while(tmp <= n){
                cnt2 += n/tmp;
                tmp *= primes[i];
            }
            if(cnt2 < cnt)  return 0;
        }
    }
    if(m != 1 && n < m)  return 0;
    return 1;
}

int main(){
    sieve();
    int n, m;
    while(scc(n,m)==2){
        if(solve(n, m)) 
            printf("%d divides %d!\n", m, n);
        else 
            printf("%d does not divide %d!\n", m, n);
    }
    return 0;
}