#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

void car(int n){
    double u, v, t, s, a;
    switch(n){
        case 1: cin>>u>>v>>t;
                a = (v-u)/t;
                s = (u+v)*t/2.0;
                printf("%.3lf %.3lf\n", s, a);
                break;
        case 2: cin>>u>>v>>a;
                t = (v-u)/a;
                s = (u+v)*t/2.0;
                printf("%.3lf %.3lf\n", s, t);
                break;
        case 3: cin>>u>>a>>s;
                v = sqrt(u*u + 2.0*a*s);
                t = (v-u)/a;
                printf("%.3lf %.3lf\n", v, t);
                break;
        case 4: cin>>v>>a>>s;
                u = sqrt(v*v - 2.0*a*s);
                t = (v-u)/a;
                printf("%.3lf %.3lf\n", u, t);
                break;
    }
}

int main(){
    int n, cs=0;
    while(sc(n)==1 && n){
        printf("Case %d: ", ++cs);
        car(n);
    }
    return 0;
}