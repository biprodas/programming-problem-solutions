#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    int a, b, test;
    cin>>test;
    while(test--){
        while(scanf("%d%d",&a, &b)==2){
            if(a<b) cout<<"<"<<endl;
           else if(a>b) cout<<">"<<endl;
           else cout<<"="<<endl;
        }
    }
return 0;
}
