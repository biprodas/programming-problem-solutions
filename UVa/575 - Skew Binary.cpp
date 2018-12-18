#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int toDecimal(string ss){
    int k = ss.size(), dec=0;
    for(int i=0; ss[i]; i++, k--){
        dec += (ss[i]-'0')*(pow(2, k)-1);
    }
    return dec;
}

int main(){
    string s;
    while(cin>>s && s!="0"){
        printf("%d\n", toDecimal(s));
    }
    return 0;
}