#include<bits/stdc++.h>
using namespace std;
int n=1000;

int fn(int a, int b){
    int c=n-a-b;
    if(a==b || a==c || b==c) return 0;
    if(a*a+b*b==c*c) return a*b*c;
    int res=0;
    return res= fn(a,b+1);
}
int main(){
    int res;
    for(int i=1;i<1000;i++){
        res= fn(i, i+1);
        if(res) break;
    }
    cout<<res;
    return 0;
}
