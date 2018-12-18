#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

double log10(double n){
    return log(n)/log(10);
}

int main(){
    int n, k;
    while(scc(n,k) != EOF){
        double digit = 0;
        for(int i=0;i<k;i++){
            digit += log10(n-i)-log10(i+1);
        }
        int ans = floor(digit) + 1;
        printf("%d\n", ans);
    }
    return 0;
}