#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
     long long int n, a,b, s=0;
     while(scanf("%lld %lld",&a, &b)==2){
            if(a==0 && b==0)
              break;
            //int x=a, y=b;
         //if(x>y) swap(x,y);
         if(a>b) swap(a,b);
        long long int m=0;
        for(n=a;n<=b;n++){
            long long int k=n, c=0;
            //long int c=0;
            while(k>0){
                c++;
               if(k%2==1) k=(3*k)+1;
              else {
                    k=k/2;
                   if(k==1)
                    break;
              }
            }

           //m=max(m,c);
           if(m<c){
            m=c;
            s=n;
           }
        }
       //printf("%d %d %d %d\n",a, b, m, s);
printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b, s, m);
     }
    return 0;
}
