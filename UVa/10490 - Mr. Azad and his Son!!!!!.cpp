#include <bits/stdc++.h>
using namespace std;
#define lng long long 

int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int perfect[] = {2, 3, 5, 7, 13, 17, 19, 31};

bool isPrime(int n) {
    for(int i=0;i<11;i++){
        if(prime[i]==n) return true;
    }
    return false;
}

bool isPerfect(int n){
    for(int i=0;i<8;i++){
        if(perfect[i]==n) return true;
    }
    return false;
}

int main(){
    int n;
    while(scanf("%d",&n) && n){
        lng k = (1LL<<(n-1)) * ((1LL<<n)-1LL);
        if(isPerfect(n)) printf("Perfect: %lld!\n", k);
        if(!isPerfect(n) && isPrime(n)) printf("Given number is prime. But, NO perfect number is available.\n");
        if(!isPerfect(n) && !isPrime(n)) printf("Given number is NOT prime! NO perfect number is available.\n");
    }
}

