#include <bits/stdc++.h>
using namespace std;
#define M 10000
vector<int> primes;

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
    for(int i=1001;i<M;i+=2){
	    if(isPrime(i)) primes.push_back(i);
    }
}

bool hasSameDigits(int n, int m) {
    int d[10]= {0};
    while(n) { d[n % 10]++; n /= 10; }
    while(m) { d[m % 10]--; m /= 10; }
    for(int i=0; i<10; i++) if(d[i]) return false;
    return true;
}

int main(){
    sieve();
    //for(auto p : primes) cout<<p<<" ";
    int pLen = primes.size();
    string res="";
    for(int i=0; i<pLen; i++) {
        for(int j=i+1; j<pLen; j++) {
            int k = primes[j] + (primes[j] - primes[i]);
            if (k < M &&  isPrime(k)) {
                if (hasSameDigits(primes[i], primes[j]) && hasSameDigits(primes[i], k)) {
                    res = to_string(primes[i]) + to_string(primes[j]) + to_string(k);
                    break;
                }
            }
        }
        //if(res != "") break;
    }
    cout<<res;
    
}

/* Answer : 296962999629 */