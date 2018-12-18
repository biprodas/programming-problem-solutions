#include <bits/stdc++.h>
using namespace std;

int toInt(string str){
    return atoi(str.c_str());
}
string toString(int x){
    stringstream ss;
    ss << x;
    string str;
    ss >> str;
    return str;
}

string decode(string str){
    int sz = str.size();
    string res = "";
    reverse(str.begin(), str.end());
    for(int i=0;i<sz;){
        int len = (str[i]=='1') ? 3 : 2;
        res += static_cast<char>(toInt(str.substr(i, len)));
        i += len;
    }
    return res;
}
string encode(string str){
    string res;
    for(char c : str){
        res += toString(c);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string s;
    while(getline(cin, s)){
        string ans = isdigit(s[0]) ? decode(s) : encode(s);
        printf("%s\n", ans.c_str());
    }
}