#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    double n, p;
    while(cin>>n>>p){
        double ans = pow(p,1/n);
        printf("%.0lf\n", ans);
    }
    return 0;
}