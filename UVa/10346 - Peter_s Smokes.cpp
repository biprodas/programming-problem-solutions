#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    int n, k;
    while(cin>>n>>k){
        int total=0;
        int res=0;
         while(n>0){
            total+=n;
            res+=n;
            n=res/k;
            res%=k;
        }
        printf("%d\n",total);
    }

    return 0;
}
