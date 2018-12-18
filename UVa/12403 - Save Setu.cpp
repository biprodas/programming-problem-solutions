#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x, sum=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if (s=="donate"){
            cin>>x;
            sum += x;
        }
        if (s=="report"){
            cout<<sum<<endl;
        }
    }
}

