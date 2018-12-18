#include<bits/stdc++.h>
using namespace std;

int ar[3];
int main(){
    int t, cs=1;
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++) 
            cin>>ar[i];
        sort(ar,ar+3);
        printf("Case %d: %d\n",cs++,ar[1]);
    }
    return 0;
}