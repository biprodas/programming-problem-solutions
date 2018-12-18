#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int gcd(int a, int b){ return b==0 ? a : gcd(b, a%b); }
int lcm(int a, int b){ return a * (b / gcd(a, b)); }

int main(){
    int n;
    while(sc(n) && n){
        vector< int > v;
        v.push_back(n);
        while(sc(n) && n) v.push_back(n);
        
        int ans=0, sz=v.size();
        for(int i=1; i<sz; i++){
            ans = gcd(abs(v[0]-v[i]), ans);
            //cout<<abs(v[0]-v[i])<<" "<<ans<<endl;
        }
        
        printf("%d\n", ans);
    }
    return 0;
}