#include <bits/stdc++.h>
using namespace std;
#define lng long long

lng mx= 0, mul=1;

int main() {
    string s;
    cin>>s;
    
    for(int i=0;i<1000-13;i++){
        mul=1;
        for(int j=i;j<i+13;j++){
            mul = mul * (s[j]-'0');
        }
        mx= max(mx, mul);
    }
    cout<<mx;
}

//ans: 23514624000