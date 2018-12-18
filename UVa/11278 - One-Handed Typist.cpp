#include <bits/stdc++.h>
using namespace std;

string standard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>? ";
string dvorak = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\" ";

map<char, char> mp;

void pre(){
    int i=0;
    for(auto a : standard){
        mp[a] = dvorak[i++];
    }
}

int main(){
    pre();
    string str, res;
    while(getline(cin, str)){
        //cout<<str<<endl;
        res = "";
        for(auto a: str) res += mp[a];
        printf("%s\n", res.c_str());
    }
    
    return 0;
}