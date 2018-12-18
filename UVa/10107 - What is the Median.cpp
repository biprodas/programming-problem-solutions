#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;  
    vector<int> v;
    
    while(cin>>n){            
        v.push_back(n);
        sort(v.begin(), v.end());
        int mid = v.size()/2;
        int median= (v.size() & 1) ? v[mid] : (v[mid-1]+v[mid])/2;           
        cout<<median<<endl;
    }

    return 0;
}