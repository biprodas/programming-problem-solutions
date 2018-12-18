#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    list<char> ls;
    list<char>::iterator it;
    
    while(cin>>s) {
        ls.clear();
        it = ls.begin();
        int len = s.length();
        for(int i=0; i<len; i++){
            if (s[i]=='[') 
		it = ls.begin();
            else if (s[i]==']') 
		it = ls.end();
            else 
		ls.insert(it, s[i]);
        }
        for(auto a : ls) cout<<a;
        printf("\n");
    }
    
    return 0;
}
