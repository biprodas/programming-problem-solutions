#include <bits/stdc++.h>
using namespace std;

bool cmp(string x, string y){
    return x+y > y+x;
}

int main (){
    int n;
    string s[55];
 
    while(cin>>n && n) {
        for(int i=0; i<n; i++) cin>>s[i];
        sort(s, s+n, cmp);
        for(int i=0;i<n;i++) cout<<s[i];
        printf("\n");
    }
 
    return 0;
}