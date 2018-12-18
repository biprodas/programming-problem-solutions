#include <bits/stdc++.h>
using namespace std;

bool isMod17(string s){
    int len=s.length(), r=0;
    for(int i=0;i<len;i++){
        r = r*10 + (s[i]-'0');
        r %= 17;
    }
    return r==0;
}

int main(){
    string s;
    while(cin>>s){
        if(s=="0") break;
        isMod17(s) ? printf("1\n") : printf("0\n");
    }
    return 0;
}

