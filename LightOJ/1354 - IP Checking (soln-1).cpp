#include <bits/stdc++.h>
using namespace std;
#define lng long long
 
lng  binToDecimal(long n){
    long factor = 1;
    long total = 0;
 
    while (n != 0){
        total += (n%10) * factor;
        n /= 10;
        factor *= 2;
    }
    return total;
}
int main() {
    //freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
            printf("Case %d: ",cs);
            lng a, b, c, d, ba, bb, bc, bd;
            scanf("%lld.%lld.%lld.%lld\n%lld.%lld.%lld.%lld",&a,&b,&c,&d,&ba,&bb,&bc,&bd);
            if(a!=binToDecimal(ba) || b!=binToDecimal(bb) || c!=binToDecimal(bc) || d!=binToDecimal(bd)){
                 cout<<"No\n";
                 continue;
            }
            cout<<"Yes\n";
            //printf("%lld %lld %lld %lld %lld %lld %lld %lld\n",a,b,c,d,ba,bb,bc,bd);
 
    }
    return 0;
}
 