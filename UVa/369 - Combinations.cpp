#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

lng ar[101][101];

//nCr
void preCombi(){
    ar[1][1] = 1, ar[1][0] = 1;
    for(int i=2; i<=100; i++) {
        ar[i][0] = 1;
        for(int j=1; j<=i; j++) {
            ar[i][j] = ar[i-1][j] + ar[i-1][j-1];
        }
    }
}

lng nCr(int n, int k){
    lng ans=1;
    k = k>(n-k) ? n-k : k;
    for(int i=1; i<=k; i++,n--){
        if(n % i == 0) ans *= n / i;
        else if (ans % i == 0) ans= ans / i * n;
        else ans = (ans * n) / i;
    }
    return ans;
}

int main() {
    //preCombi();
    int n, m;
    while(scc(n,m)){
        if(n==0 && m==0) break;
        lng c = nCr(n,m); //ar[n][m]
        printf("%d things taken %d at a time is %lld exactly.\n", n, m, c);
    }
    return 0;
}