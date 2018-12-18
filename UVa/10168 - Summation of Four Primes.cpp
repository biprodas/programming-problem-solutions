#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)

#define M 10000007
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

int main(){
    sieve();
    int n;
    while(sc(n) != EOF){
        if(n < 8) { cout<<"Impossible.\n"; continue; }
        int p1=2, p2, p3, p4;
        if(n%2==0) p2 = 2; n-=4;
        else p2 = 3; n-=5;
        for(int i=2;;i++){
            if(isPrime(i) && isPrime(n-i)){
                p3 = i, p4 = n-i;
                break;
            }
        }
        printf("%d %d %d %d\n", p1, p2, p3, p4);
    }
    return 0;
}