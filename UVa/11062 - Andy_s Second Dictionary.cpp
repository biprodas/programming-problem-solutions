#include <bits/stdc++.h>
using namespace std;

set<string> dictionary;

int main (){
    string s, word="";
 
    while(getline(cin, s)){
        int len = s.length();
        bool hyfen = false;

        for(int i=0;i<len;i++){
            if(isalpha(s[i]) || (s[i]=='-' && i!=len-1)) word += tolower(s[i]);
            else if(s[i]=='-' && i==len-1) hyfen = true;
            else{
                if(word!="") dictionary.insert(word);
                word = "";
            }
        }
        if(!hyfen){
            if(word!="") dictionary.insert(word);
            word = "";
        }
    }
    
    for(auto w : dictionary) cout<<w<<endl;
 
    return 0;
}