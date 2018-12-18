#include<bits/stdc++.h>
using namespace std;

int call(int n){
    if(n<10) return n; //base case
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return call(sum);
}
int main(){
    //freopen("in.txt","r",stdin);
    int n;
    while(scanf("%d",&n)==1){
        if(n==0) break;
        cout<<call(n)<<endl;

    }
    return 0;
}