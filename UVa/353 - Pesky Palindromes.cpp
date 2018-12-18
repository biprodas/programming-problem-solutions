#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string ss){
    for(int i=0, j=ss.size()-1; i < j; i++, j--){
        if(ss[i] != ss[j])
            return false;
    }
    return true;
}

int main() {
    string s;
    while(cin>>s){
        set<string> st;
        string ss;
        int len = s.length();
        for(int i=0; i<len; i++){
            ss = s[i];
            st.insert(ss);
            for(int j=i+1; j<len; j++){
                ss = ss + s[j];
                st.insert(ss);
            }
        }
        int cnt=0;
        for(auto a : st){
            if(isPalindrome(a)) cnt++;
        }
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes."<<endl;
    }
    return 0;
}
