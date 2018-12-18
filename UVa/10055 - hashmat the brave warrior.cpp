#include<cstdio>
using namespace std;
int main(){
     long long a, b;
     while(scanf("%lld%lld",&a,&b)==2){
        long long ans = a - b;
        if(ans<0) ans=ans*-1;//make answer positive
        printf("%lld\n",ans);
     }
     return 0;
}
