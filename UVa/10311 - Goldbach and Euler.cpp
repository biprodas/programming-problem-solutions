#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

#define M 100000008
vector<int> prime;
int n, x;

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
    for(int i=3;i<=M;i+=2){
        if(isPrime(i)) 
	        prime.push_back(i);
    }
}
bool Check(){
    if(n&1){
        x = 2;
        return isPrime(n-x);
    }
    int i = (int)(lower_bound(prime.begin(), prime.end(), n/2) - prime.begin());
    if(prime[i]==n/2) i++;
    while(prime[i] < n){
        if(isPrime(n-prime[i])){
            x = n-prime[i];
            return true;
        }
        i++;
    }
    return false;
}

int main(){
    sieve();
    while(sc(n)==1){
        if (Check()) printf("%d is the sum of %d and %d.\n", n, x, n-x);
        else printf("%d is not the sum of two primes!\n", n);
    }
	return 0;
}