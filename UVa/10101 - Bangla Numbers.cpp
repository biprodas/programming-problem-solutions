#include <bits/stdc++.h>
using namespace std;
#define lng long long

void bangla(lng n){
    if (n==0) printf(" 0");
    if (n >= 10000000){
        bangla(n / 10000000);
        printf(" kuti");
        n %= 10000000;
    }
    if (n >= 100000){
        bangla(n / 100000);
        printf(" lakh");
        n %= 100000;
    }
    if (n >= 1000){
        bangla(n / 1000);
        printf(" hajar");
        n %= 1000;
    }
    if (n >= 100){
        bangla(n / 100);
        printf(" shata");
        n %= 100;
    }
    if (n)
        printf(" %lld",n);
}

int main() {
    lng n;
    int cs = 0;
    while(cin>>n){
        printf ("%4d.",++cs);
        bangla(n);
        printf("\n");
    }
    return 0;
}
