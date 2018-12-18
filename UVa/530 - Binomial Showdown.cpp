#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

lng nCr(int n, int k){
    lng ans=1;
    k = k>(n-k) ? n-k : k;
    for(int i=1; i<=k; i++,n--){
        if(n % i == 0) ans *= n / i;
        else if (ans % i == 0) ans= ans / i * n;
        else ans= (ans * n) / i;
    }
    return ans;
}

int main(){
    int n, k;
    while(scc(n,k)){
        if(!n && !k) break;
        cout<<nCr(n,k)<<endl;
    }
    return 0;
}