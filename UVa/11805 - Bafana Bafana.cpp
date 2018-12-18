#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, cs=1;
    int n, k, p, ans;
    cin>>t;
    while(t--){
        cin>>n>>k>>p;
        ans= (k+p)%n;
        if(ans==0) ans=n;
        printf("Case %d: %d\n",cs++,ans);
    }
    
    return 0;
}