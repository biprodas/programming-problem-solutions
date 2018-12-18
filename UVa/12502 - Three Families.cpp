#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y, z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        int ans = z * (2 * x - y) / (x + y);
        cout<<ans<<endl;
    }
    return 0;
}

