#include <bits/stdc++.h>
using namespace std;

int ar1[26];
int ar2[26];

int main(){
    string s1, s2;
    while(getline(cin, s1)){
        getline(cin, s2);
        memset(ar1,0,sizeof(ar1));
        memset(ar2,0,sizeof(ar2));
        for(auto a: s1) ar1[a-'a']++;
        for(auto a: s2) ar2[a-'a']++;
        for(int i=0;i<26;i++){
            int mn = min(ar1[i],ar2[i]);
            while(mn--) printf("%c", i+'a');
        }
        printf("\n");
    }
}