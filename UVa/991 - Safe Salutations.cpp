#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

lng Catalan(int n){
    int k = n;
    n = 2*n;
    lng ans=1;
    k = k>(n-k) ? n-k : k;
    for(int i=1; i<=k; i++,n--){
        if(n % i == 0) ans *= n / i;
        else if (ans % i == 0) ans= ans / i * n;
        else ans= (ans * n) / i;
    }
    return ans/(k+1);
}

int main(){
    int n, blank=0;
    while(cin>>n){
        if(blank) printf("\n"); blank = 1;
        cout<<Catalan(n)<<endl;
    }  
    return 0;
}