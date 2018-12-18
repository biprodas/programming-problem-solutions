#include<bits/stdc++.h>
using namespace std;
int N=1000;

int fn(int m){
    int n= (500-m*m)/m;
    if(m<=n) return 0;

    int res=0;
    if(m*(m+n)==500) {
        int a= 2*m*n;
        int b= m*m-n*n;
        int c= m*m+n*n;
        res= a*b*c;
    }
    else res= fn(m-1);
    return res;
}
int main(){
    int m= sqrt(500); //2m(m+n)==1000;=> m(m+n)==500;
    int res= fn(m);
    cout<<res;
    return 0;
}

The above program is based on:
-------------------------------
a= 2mn; b= m^2 -n^2; c= m^2 + n^2;
a + b + c = 1000;

2mn + (m^2 -n^2) + (m^2 + n^2) = 1000;
2mn + 2m^2 = 1000;
2m(m+n) = 1000;
m(m+n) = 500;

m>n;

m= 20; n= 5;

a= 200; b= 375; c= 425;