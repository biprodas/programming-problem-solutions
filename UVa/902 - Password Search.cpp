#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

int main(){
    int n;
    string s;
    while(cin>>n>>s){
        mp.clear();
        for(int i=0; i+n < s.size(); i++){
            mp[s.substr(i,n)]++;
        }
        string res;
        int mx=0;
        for(auto a : mp){
            //cout<<a.first<<" "<<a.second<<endl;
            if(a.second>mx){
                mx = a.second;
                res = a.first;
            }
        }
        printf("%s\n", res.c_str());
    }
    
    return 0;
}