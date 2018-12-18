#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

string base2base(string s, int from, int to){
    lng dec = 0, len = s.size(), k=1;
    for(int i=len-1; i>=0; i--){
        dec += k * (isdigit(s[i]) ? (s[i]-'0') : (s[i]-'A'+10));
        k *= from;
    }
    string res="";
    while(dec>0){
        int x = dec%to; dec/=to;
        char ch = x < 10 ? x+'0' : x+'A'-10;
        res = ch + res;
    }
    return res;
}

int main(){
    string s;
    int from, to;
    while(cin>>s>>from>>to){
        string res = base2base(s,from,to);
        if(res.size()>7) res = "ERROR";
        if(res=="") res = "0";
        for(int i=0;i<7-res.size();i++) printf(" ");
        printf("%s\n",res.c_str());
    }
    return 0;
}

/* Base conversion in JAVA:
        String s = "ABCD";
        int from = 16, to = 15;
        BigInteger n = new BigInteger(s,from);
        System.out.println(n.toString(to));
*/