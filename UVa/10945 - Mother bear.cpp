#include <bits/stdc++.h>
using namespace std;

bool isValid(char ch){
    return (ch=='.' || ch==',' || ch == '!' || ch == '?' || ch == ' ') == false;
}

bool isPalindrome(string ss){
    for(int i=0, j=ss.size()-1; i < j; i++, j--){
        if(ss[i] != ss[j])
            return false;
    }
    return true;
}

int main() {
    string str;
    while(getline(cin, str)){
        if(str=="DONE") break;
        int len = str.length();
        string s = "";
        for(int i=0; i<len; i++) {
            if(isValid(str[i])) s += tolower(str[i]);
        }
        isPalindrome(s) ? cout<<"You won't be eaten!\n" : cout<<"Uh oh..\n";
    }
    return 0;
}
