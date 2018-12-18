#include<bits/stdc++.h>
using namespace std;

#define M 1000006
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
    primes.push_back(2);
    for(int i=3;i<=M;i+=2){
	    if(isPrime(i)) primes.push_back(i);
    }
}

bool isSmith(int N){
    int n = N, pDigitSum = 0;
    for(int i=0; primes[i]*primes[i] <= n; i++){
        while(n % primes[i] == 0){
            int p = primes[i];
            n /= p;
            while(p > 0) {
                pDigitSum += (p % 10);
                p /= 10;
            }
        }
    }
    if (n != 1 && n != N){
        while(n > 0){
            pDigitSum = pDigitSum + n%10;
            n = n/10;
        }
    }
    int sumOfDigits = 0;
    while(N > 0){
        sumOfDigits += N % 10;
        N /= 10;
    }
    return (pDigitSum == sumOfDigits);
}

int main(){
    sieve();
    int t, n;
    cin>>t;
    while(t--){
        scanf("%d", &n);
        while(n++){
            if(isSmith(n)){
                printf("%d\n", n);
                break;
            }
        }
    }
}
