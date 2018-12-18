#include <bits/stdc++.h>
using namespace std;

void printReverse(string s){
    for(int i=s.size()-1;i>=0;i--) 
        cout<<s[i];
}

int main(){
    int n;
    string s;

    while(cin>>n>>s && n){
        int groupSize = s.size()/n, i=0;
        while(n--){
            printReverse(s.substr(i, groupSize));
            i += groupSize;
        }
        cout<<endl;
    }

    return 0;
}
