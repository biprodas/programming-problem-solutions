#include <bits/stdc++.h>
using namespace std;

string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
map<char, char> mp;

void mapping(){
    for(int i=0; i<s1.size(); i++) {
        mp[s1[i]] = s2[i];
    }
}

int main() {
    mapping();
    int n;
    string s;
    
    while(cin>>s){
        bool palindrome=true, mirrored=true;
        int len = s.length();
        
        for(int i=0; i<=len/2; i++){
            if(s[i] != s[len-1-i]) palindrome=0;
            if(s[len-1-i] != mp[s[i]]) mirrored=0;
        }
        
        if(palindrome && mirrored) cout<<s<<" -- is a mirrored palindrome.\n\n";
        else if(palindrome && !mirrored) cout<<s<<" -- is a regular palindrome.\n\n";
        else if(!palindrome && mirrored) cout<<s<<" -- is a mirrored string.\n\n";
        else cout<<s<<" -- is not a palindrome.\n\n";
    }
    
    return 0;
}
