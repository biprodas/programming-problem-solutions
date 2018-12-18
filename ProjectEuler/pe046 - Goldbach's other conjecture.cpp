#include <bits/stdc++.h>
using namespace std;
#define M 1000006

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
}

bool isConjecture(int n){
    if(isPrime(n)) return false;
    for(int i=1; 2*i*i<n; i++){
        if(isPrime(n-2*i*i)) return false;
    }
    return true;
}

int main(){
    sieve();
    int i=1;
    while(i+=2){
        if(isConjecture(i)) break;
    }
    cout<<i;
}

/* Answer : 5777 */

