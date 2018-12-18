#include <bits/stdc++.h>
using namespace std;

map<int, int> freq;
vector<int> v;
 
int main() {
    int n;
    while(cin>>n){
        if(freq[n]==0) v.push_back(n);
        freq[n]++;
    }
    for(auto a : v){
        cout<<a<<" "<<freq[a]<<endl;
    }
    return 0;
}