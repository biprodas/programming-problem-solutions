#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

#define M 46500
vector<int> primeList;
int L, R, sz;

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
    primeList.push_back(2);
    for(int i=3;i<=M;i+=2){
        if(isPrime(i)) 
	        primeList.push_back(i);
    }
    sz = primeList.size();
}
bool isPrime2(int n){
    if(n<M) return isPrime(n);
    for(int i=0, sq=(int)sqrt(n); i<sz && primeList[i]<=sq; i++)
        if(n%primeList[i]==0) return false;
    return true;
}

int nextPrime(lng n) {
    while(++n<=R){
        if(isPrime2(n)) return (int)n;
    }
    return 0;
}

int main(){
    sieve();
    while(scc(L,R) != EOF) {
        int mn = INT_MAX, mx = 0, mn1, mn2, mx1, mx2;
        int last = nextPrime(L-1), next = nextPrime(last);
        //cout<<last<<next<<endl;
        while(next){
            if(next-last < mn) {
                mn = next-last;
                mn1 = last, mn2 = next;
            }
            if(next-last > mx) {
                mx = next-last;
                mx1 = last, mx2 = next;
            }
            last = next;
            next = nextPrime(next);
        }
        if(mx) printf("%d,%d are closest, %d,%d are most distant.\n", mn1, mn2, mx1, mx2);
        else printf("There are no adjacent primes.\n");
    }
    
	return 0;
}