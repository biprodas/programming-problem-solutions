#include <bits/stdc++.h>
using namespace std;

int main(){
    string id;
    
    while(cin>>id && id!="#"){
        next_permutation(id.begin(), id.end()) ? cout<<id<<endl : cout<<"No Successor\n";
    }

    return 0;
}
