#include<bits/stdc++.h>
using namespace std;

template < class T > T gcd(T a , T b ) { if(b==0) return a; else return gcd(b, a%b);}
template < class T > T lcm(T a , T b ) { return  a*b / gcd(a, b);}

int main(){
    int n=20;
    int m=lcm(n,n-1);
    for(int i=n-2;i>n/2;i--){
        m=lcm(m,i);
    }
    cout<<m;
    return 0;
}
