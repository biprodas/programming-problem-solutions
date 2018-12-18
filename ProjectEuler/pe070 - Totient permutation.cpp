#include <bits/stdc++.h>
using namespace std;
#define M 10000000
int phi[M+3];

void prePhi(){
    for (int i=1; i<=M; i++){
        phi[i] = i;
    }
    for(int p=2; p<=M; p++){
        if (phi[p] == p) {
            for (int k=p; k<=M; k+=p){
                phi[k] -= phi[k] / p;
            }
        }
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
    prePhi();
    int ans=0;
    double mn= INT_MAX;
    for(int i=2;i<=M;i++){
        double d = i / (double)phi[i];
        if(d<mn && hasSameDigits(i, phi[i])) {
            mn= d;
            ans= i;
        }
    }
    cout<<ans;
    return 0;
}

/* Answer : 8319823 */