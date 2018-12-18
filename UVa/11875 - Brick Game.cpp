#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, cs=1;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        //sort(ar,ar+n);
        int idx= n/2;
        printf("Case %d: %d\n",cs++,ar[idx]);
    }
    return 0;
}