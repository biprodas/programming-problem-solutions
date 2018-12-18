#include <bits/stdc++.h>
using namespace std;
#define lng long long
 
int main() {
    lng t, w;
    cin>>t;
    for(int cs=1; cs<=t; cs++){
        printf("Case %d: ",cs);
        scanf("%lld", &w);
        if(w&1) {
            printf("Impossible\n");
        }
        else{
            lng m, n;
            for(lng i=2; i<w; i+=2){
                n= w / i;
                if(n*i==w & n&1){
                    m= i;
                    break;
                }
            }
            printf("%lld %lld\n",n,m);
        }
    }
    return 0;
}
