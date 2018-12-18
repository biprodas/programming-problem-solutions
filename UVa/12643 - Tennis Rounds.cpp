#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
     int n, i, j, r=0;
     while(scanf("%d %d %d",&n,&i,&j)==3){
         for(int a=1; a<=n; a++){
             int x=ceil(i/pow(2,a));
             int y=ceil(j/pow(2,a));
            //cout<<x<<" "<<y<<endl;
             if(x==y){
                cout<<a<<endl;
                break;
             }
          }
     }
    return 0;
}
