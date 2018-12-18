#include<bits/stdc++.h>
using namespace std;

int a[3];

int main(){
    int i, tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++){
        printf("Case %d: ", cs);
        int me, lift;
        cin>>me>>lift;
        int time= (abs(me-lift)+me)*4 + 19;
        cout<<time<<endl;
    }
 
    return 0;
}
 