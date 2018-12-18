#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        char a[11];
        cin>>a;

        if(strlen(a)==5)
            cout<<3<<endl;
        else{
            int c=0;
            if(a[0]=='o') c++;
            if(a[1]=='n') c++;
            if(a[2]=='e') c++;
            if(c>=2) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
return 0;
}
