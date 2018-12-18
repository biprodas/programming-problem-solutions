#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)

int main(){
    double radius, rec, cir, result;
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        result=0;
        cin>>radius;
        rec= 4*radius*radius;
        cir= PI*radius*radius;
        result=rec-cir;

        printf("Case %d: %.2lf\n", i, result);
    }
    return 0;
}
