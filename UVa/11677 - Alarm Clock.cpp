#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    while(cin>>h1>>m1>>h2>>m2){
        if(!h1 && !m1 && !h2 && !m2) break;
         
        int t1 = h1*60 + m1;
        int t2 = h2*60 + m2;
        if(t2<t1) t2 += 24*60; //add whole day
        cout<<(t2-t1)<<endl;
    }
    return 0;
}
