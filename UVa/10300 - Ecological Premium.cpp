#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int t, f, a, b, c;
    sc(t);
    while(t--){
        sc(f);
        int ans = 0;
        for(int i=0; i<f;i++){
            scc(a,b);sc(c);
            ans += a*c;
        }
        printf("%d\n", ans);
    }
    return 0;
}
