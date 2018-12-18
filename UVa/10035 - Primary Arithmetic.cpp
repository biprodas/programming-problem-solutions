#include<bits/stdc++.h>
using namespace std;

int call(int a, int b, int c){
    if(a==0 && b==0) return 0; //base case
    (a%10 + b%10 + c)>9 ? c=1 : c=0;
    return c+call(a/10, b/10,c);
}

int main(){
    //freopen("in.txt","r",stdin);
    int a, b;
    while(scanf("%d%d",&a,&b)==2){
        if(a==0 && b==0) break;
        int res= call(a,b,0);
        if(res==0) cout<<"No carry operation.\n";
        else if(res==1) cout<<"1 carry operation.\n";
        else cout<<res<<" carry operations.\n";
    }
    return 0;
}