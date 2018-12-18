#include <bits/stdc++.h>
using namespace std;
#define M 1000000
int phi[M+3];

void prePhi(){
    for(int i=1; i<=M; i++) phi[i] = i;

    for(int p=2; p<=M; p++){
        if (phi[p] == p) {
            for (int k=p; k<=M; k+=p){
                phi[k] -= phi[k] / p;
            }
        }
    }
}

int main(){
    prePhi();
    int ans=0;
    double mx=0;
    for(int i=1;i<=M;i++){
        double d = i / (double)phi[i];
        if(d>mx) {
            mx= d;
            ans= i;
        }
    }
    cout<<ans;
    return 0;
}

/* Answer : 510510 */