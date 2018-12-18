#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, cs=0;
    cin>>t;
    while(t--){
        int n, x, hi=0, lo=0, pre, i=1;
        cin>>n;
        for(cin>>pre; i<n; i++){
            cin>>x;
            if(x>pre) hi++;
            if(x<pre) lo++;
            pre=x;
        }
        printf("Case %d: %d %d\n", ++cs, hi, lo);
    }
    
    return 0;
}
