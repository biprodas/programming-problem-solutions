#include<iostream>
#include<cstdio>
using namespace std;

int main() {
     int a, b, c;
     while(scanf("%d %d %d",&a,&b,&c)==3){
        if(a==b && a==c) cout<<"*\n";
        else if(a==b) cout<<"C\n";
        else if(a==c) cout<<"B\n";
        else cout<<"A\n";
     }
    return 0;
}
