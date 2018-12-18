#include <bits/stdc++.h>
using namespace std;
#define lng long long

bool isPrime(int n) {
    if(n<=1) return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    }
    return true;
}

lng bigMod(lng x, lng n, lng M){
    if(n == 0) return 1;
    lng ret = bigMod(x, n >> 1, M); //n= n/2
    if(n & 1) return (((ret % M) * (ret % M))%M * (x % M)) % M; //n is odd
    return ((ret % M) * (ret % M)) % M; //n is even
}

int main(){
    int p, a;
    while(scanf("%d %d", &p, &a)){
        if(!p && !a) break;
        int ret = bigMod(a, p, p);
        (!isPrime(p) && ret == a) ? cout<<"yes\n" : cout<<"no\n";
    }
    
    return 0;
}



