#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int gcd(int a, int b){ return b==0 ? a : gcd(b, a%b); }
int lcm(int a, int b){ return a * (b / gcd(a, b)); }

int toDecimal(string ss){
    int dec=0;
    for(int i=0; ss[i]; i++){
        dec = (dec<<1) + (ss[i]-'0');
    }
    return dec;
}

int main(){
    int t, cs=0;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        if(gcd(toDecimal(s1),toDecimal(s2))==1)
            printf("Pair #%d: Love is not all you need!\n", ++cs);
        else 
            printf("Pair #%d: All you need is love!\n", ++cs);
    }
    return 0;
}