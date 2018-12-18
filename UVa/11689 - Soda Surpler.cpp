#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int t, e, f, c;;
    sc(t);
    while(t--){
        scc(e,f); sc(c);
        e += f;
        int ans = 0;
        while(e >= c) {
            ans += e/c;
            e = e/c + e%c;
        }
        printf("%d\n", ans);
    }
    return 0;
}