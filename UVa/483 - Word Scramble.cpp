#include <bits/stdc++.h>
using namespace std;

void printReverse(string s){
    for(int i=s.size()-1;i>=0;i--) 
        cout<<s[i];
}

int main(){
    string s;

    while(getline(cin,s)){
        istringstream is(s);
        bool first = 1;
        
        while(is>>s){
            if(!first) cout<<" "; 
            first=0;
            printReverse(s);
        }

        cout<<endl;
    }

    return 0;
}
