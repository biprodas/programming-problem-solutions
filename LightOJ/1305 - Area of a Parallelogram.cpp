#include <bits/stdc++.h>
using namespace std;
#define lng long long
 
int main() {
   // freopen("in.txt", "r", stdin);
    int t, a1, a2, b1, b2, c1, c2, d1, d2;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
            printf("Case %d: ",cs);
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        d1= a1+c1-b1;
        d2= a2+c2-b2;
        int df1= a1*b2+b1*c2+c1*d2+d1*a2;
        int df2= a2*b1+b2*c1+c2*d1+d2*a1;
        int area= .5*abs(df1-df2);
        printf("%d %d %d\n",d1,d2,area);
    }
    return 0;
}
 