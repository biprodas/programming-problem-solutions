#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, n, ans, cs=1;
    
    while(cin>>r>>n){
        if(r==0 or n==0) break;
        printf("Case %d: ",cs++);
        if(n*27<r) printf("impossible\n");
        else{
            ans= ceil(r/(double)n)-1;
            printf("%d\n",ans);
        }
    }

    return 0;
}
