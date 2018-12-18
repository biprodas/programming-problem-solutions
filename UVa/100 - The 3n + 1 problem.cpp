#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main() {
      int n, a,b;
     while(scanf("%d%d",&a, &b)==2 && a>0 && b>0){
         int x=a, y=b;
         if(x>y) swap(x,y);
         int m=0;
         for(n=x;n<=y;n++){
             int k=n;
             int c=0;
             while(k>0){
                 c++;
                 if (k==1) break;
                 if(k%2==1) k=(3*k)+1;
                 else k=k/2;
             }
             m=max(m,c);
         }
         printf("%d %d %d\n",a, b, m);
     }
    return 0;
}
