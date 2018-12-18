#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359

int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        double r1, r2, h, p, r, x, v;
        cin>>r1>>r2>>h>>p;

        r = r1 - ((r1-r2)/h)*(h-p);
        x = (h*r2)/(r1-r2);
        v = (PI/3.0)*((r*r)*(p+x)- r2*r2*x);
        printf("Case %d: %0.9lf\n", i, v);
    }
return 0;
}
