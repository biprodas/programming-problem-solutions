//modular arithmetic
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#define i64 long long

using namespace std;

int mode(int b, int p, int m){
    if(p==0) return 1;
    if(p%2==0){
        int r = mode(b, p/2, m);
        return ((r%m)*(r%m))%m;
    }
    else
        return ((b%m)*mode(b,p-1, m)%m)%m;
}

int main(){
    int b, p, m;
    while(cin>>b>>p>>m){
        //int r=0;
        cout<<mode(b,p,m)<<endl;
    }
    return 0;
}
