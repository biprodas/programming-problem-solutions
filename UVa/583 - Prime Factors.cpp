#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

#define M 100005
vector<int> prime;
int status[(M/32)+2];
bool Check(int n, int pos){return (bool)(n&(1<<pos));}
int Set(int n, int pos){ return n= n|(1<<pos);} 

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return Check(status[n>>5],n&31)==0; //return !Check(status[n/32],n%32);
}
void sieve() {
    for(int i=3; i*i<=M; i+=2) {
        if(Check(status[i>>5],i&31) == false) { // i/32 = i>>5, i%32 = i&31
            for (int j=i*i; j<=M; j+=(i<<1)) // 2*i = i<<1
                status[j>>5]= Set(status[j>>5], j&31);
        }
    }
    prime.push_back(2);
    for(int i=1;i<=M;i+=2){
	    if(isPrime(i)) prime.push_back(i);
    }
}

vector<int> factorize(int n){
    vector<int> factor;
    int sqN= sqrt(n);
    for(int i=0; prime[i] <= sqN; i++) {
        if(n % prime[i] == 0 ) {
            while(n % prime[i] == 0) {
                n /= prime[i];
                factor.push_back(prime[i]);
            }
        }
    }
    if(n > 1)  factor.push_back(n);
    return factor;
}

int main(){
    sieve();
    int n;
    while(sc(n)==1 && n){
        printf("%d = ", n);
        if(n<0) {
            n *= -1;
            printf("-1 x ");
        }
        vector<int> factor = factorize(n);
        int x = 0;
        for(auto a : factor){
            if(x) printf(" x ");
            x=1;
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}