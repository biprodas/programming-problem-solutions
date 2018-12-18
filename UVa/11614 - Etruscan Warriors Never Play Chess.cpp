#include<bits/stdc++.h>
using namespace std;
#define lng long long

int main(){
    lng t, n, s, ans;
    cin>>t;
    while(t--){
        cin>>n;
        s= sqrt(2*n);
        ans= s*(s+1)>n*2 ? s-1 : s;
        cout<<ans<<endl;
    }
    
    return 0;
}