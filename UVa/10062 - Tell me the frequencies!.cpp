#include <bits/stdc++.h>
using namespace std;
#define pci pair<char, int>

map<char, int> mp;
vector<pci> v;

bool cmp(pci x, pci y){
    if(x.second != y.second) return x.second < y.second;
    return x.first > y.first;
}

int main(){
    int blank=0;
    string str;
    while(getline(cin, str)){
        mp.clear();
        v.clear();
        for(int i=0; str[i]; i++){
            mp[str[i]]++;
        }
        if(blank) puts(""); blank=1;
        for(auto a : mp) v.push_back({a.first, a.second});
        sort(v.begin(),v.end(),cmp);
        for(auto a: v) printf("%d %d\n", a.first, a.second);
    }
    return 0;
}
