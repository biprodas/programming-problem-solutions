//Modular arithmetic
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<cmath>
#define MAX 10001
#define i64 long long

using namespace std;

int main(){
    int n;
    while(cin>>n){
        if((n%5!=0 && n%2!=0)){
            int r=1, i=1;
        while(r%n!=0){
            //r+=pow(10.0,i++);
            r=r*10+1;//cout<<"r="<<r<<" ";
            i++;
            r%=n;
        }
        cout<<i<<endl;
        }


    }
     return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("in.txt","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n%2==0 || n%5==0)
           continue;
        int r=0, c=0;
        do{
            c++;
            r=r*10+1;
            r%=n;
        }
        while(r!=0);
        cout<<c<<endl;
    }
return 0;
}