#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++){
        printf("Case %d: ", cs);
        int n, x, mile=0, juice=0;
        cin>>n;
        while(n--){
            cin>>x;
            mile += (x/30 + 1) * 10;
            juice += (x/60 + 1) * 15;
        }
        if (mile < juice) printf("Mile %d\n", mile);
        else if(mile > juice) printf("Juice %d\n", juice);
        else printf("Mile Juice %d\n", mile);
    }
}

