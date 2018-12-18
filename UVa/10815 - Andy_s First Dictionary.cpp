#include <bits/stdc++.h>
using namespace std;

set<string> dictionary;

void makeLowerAndInsert(string s){
    string r;
    for(int i=0;s[i];i++){
        if(s[i]>='a' && s[i]<='z') r += s[i];
        else if(s[i]>='A' && s[i]<='Z')  r += s[i]+32;
        else {
            dictionary.insert(r);
            r="";
        }
    }
    dictionary.insert(r);
}

int main(){
    string word;
    
    while(cin>>word){
        makeLowerAndInsert(word);
    }
    
    for(auto w: dictionary){
        if(w!="") cout<<w<<endl;
    }
    
    return 0;
}
