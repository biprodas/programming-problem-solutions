#include<bits/stdc++.h>
using namespace std;

int main(){
    double d, v, u, ans;
    int t, cs=1;
    cin>>t;

    while(t--){
        cin>>d>>v>>u;
        printf("Case %d: ",cs++);
        if(v==0 or u<=v) printf("can't determine\n");
        else{
            ans= d/sqrt(u*u-v*v) - d/u;
            printf("%.3lf\n",ans);
        }
    }
    
    return 0;
}
