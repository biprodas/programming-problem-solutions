#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

#define M 10004
vector<int> prime;
int status[(M/32)+2];
bool Check(int n, int pos){return (bool)(n&(1<<pos));}
int Set(int n, int pos){ return n= n|(1<<pos);} 

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return Check(status[n>>5],n&31)==0;
}
void sieve() {
    for(int i=3; i*i<=M; i+=2) {
        if(Check(status[i>>5],i&31) == false) {
            for(int j=i*i; j<=M; j+=(i<<1)) 
                status[j>>5]= Set(status[j>>5], j&31);
        }
    }
    prime.push_back(2);
    for(int i=1;i<=M;i+=2){
	    if(isPrime(i)) prime.push_back(i);
    }
}

int numOfPF(int n){
    int idx=0, p= prime[idx], ans=0;
    while(p*p <= n){
        while(n % p == 0){
            n /= p;
            ans++;
        }
        p = prime[++idx];
    }
    if(n != 1) ans++;
    return ans;
}

int ar[1000006];
void pre(){
    ar[1] = 0;
    for(int i=2; i<1000006; i++){
        ar[i] = ar[i-1] + numOfPF(i);
    }
}

int main(){
    sieve();
    pre();
    int n;
    while(sc(n)==1){
        printf ("%d\n", ar[n]);
    }
    return 0;
}