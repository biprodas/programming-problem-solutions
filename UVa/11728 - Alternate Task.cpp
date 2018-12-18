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


int sumOfDivisors(int n){
    int idx=0, p= prime[idx], ans = 1;
    while(p*p <= n){
        int power= 0;
        while(n % p == 0) {
            n /= p;
            power++;
        }
        ans *= ((int)pow((float)p, power + 1.0) - 1) / (p - 1); 
        p= prime[++idx];
    }
    if(n != 1) ans *= ((int)pow((float)n, 2.0) - 1) / (n - 1);
    return ans;
}

int ar[1000006];
void pre(){
    memset(ar,-1,sizeof(ar));
    for(int i=1;i<1000006;i++){
        int x = sumOfDivisors(i);
        if(x<=1000) ar[x] = i;
    }
}

int main(){
    sieve();
    pre();
    int n, cs=0;
    while(sc(n)==1 && n){
        printf ("Case %d: %d\n", ++cs, ar[n]);
    }
    return 0;
}