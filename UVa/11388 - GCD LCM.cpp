#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int gcd(int a, int b){ return b==0 ? a : gcd(b, a%b); }
int lcm(int  a, int b) { return a * (b / gcd(a, b)); }

int main(){
    int t, g, l;
    sc(t);
    while(t--){
        scc(g,l);
        l%g ? printf("-1\n") : printf("%d %d\n", g, l);
    }
    return 0;
}