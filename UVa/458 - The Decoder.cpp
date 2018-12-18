#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while(getline(cin,s)){
        for(int i=0;s[i];i++) s[i]-=7;
        cout<<s<<endl;
    }
    return 0;
}
