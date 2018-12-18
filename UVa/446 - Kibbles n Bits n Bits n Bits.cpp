#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int n, a, b;
    char c;
    cin>>n;
    while(n--){
        cin >> hex>>a >>c>> hex>>b;
        int res = (c=='+') ? a+b : a-b;
        cout<<bitset<13>(a)<<" "<<c<<" "<<bitset<13>(b)<<" = "<<res<<endl;
    }
    return 0;
}