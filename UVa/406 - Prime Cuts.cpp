#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long
#define M 1003

vector<int> prime;
int size[M];

bool isPrime(int n) {
    if (n && n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0)
            return false;
    }
    return true;
}

void pre(){
    for(int i=0, k=0; i<M; i++){
        if(isPrime(i)) k++, prime.push_back(i);
        size[i] = k;
    }
}

int main(){
    pre();
    int n, c;
    while(scc(n,c)==2){
        int start=0, len=0;
        if(size[n])
        len = (size[n]&1) ? 2*c-1: 2*c;
        start = (size[n]-len)/2;
        if(len > size[n]){
            start = 0;
            len = size[n];
        }
        printf("%d %d:", n, c);
        while(len--) printf(" %d", prime[start++]);
        printf("\n\n");
    }
}
