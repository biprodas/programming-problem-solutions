#include <bits/stdc++.h>
using namespace std;

map<string, string> dictionary;
map<string, string>::iterator it;

int main(){
    string s, key, value;
    stringstream ss;

    while(getline(cin, s) && s.size()){
        ss.clear();
        ss<<s;
        ss>>value;
        ss>>key;
        dictionary[key] = value;
    }

    while(cin>>key){
        it = dictionary.find(key);
        if(it==dictionary.end()) puts("eh");
        else cout << it->second << endl;
    }

    return 0;
}