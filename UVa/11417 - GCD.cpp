#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    int n;
    while(scanf("%d",&n)==1){
        if(n==0) break;
        int g=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                g+=__gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}