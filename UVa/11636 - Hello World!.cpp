#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int n, cs=0;
    while(sc(n) && n>=0){
        int ans = ceil(log2(n));
        printf("Case %d: %d\n", ++cs, ans);
    }
    return 0;
}