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
  return Check(status[n>>5],n&31)==0; 
}
void sieve() {
    for(int i=3; i*i<=M; i+=2) {
        if(Check(status[i>>5],i&31) == false) {
            for (int j=i*i; j<=M; j+=(i<<1))
                status[j>>5]= Set(status[j>>5], j&31);
        }
    }
    prime.push_back(2);
    for(int i=1;i<=M;i+=2){
	    if(isPrime(i)) prime.push_back(i);
    }
}

int EulerPhi(lng n){
    if(n==1) return 0;
    lng idx=0, p= prime[idx], ans= n;
    while(p*p<=n){
        if(n % p == 0) ans -= ans / p; 
        while(n % p == 0) n /= p;
        p= prime[++idx];
    }
    if(n != 1) ans -= ans/n;
    return ans;
}

int main(){
    sieve();
    lng n;
    while(cin>>n && n){
        cout<<EulerPhi(n)<<endl;
    }
    return 0;
}