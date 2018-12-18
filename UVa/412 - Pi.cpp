#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int gcd(int a, int b){ return b==0 ? a : gcd(b, a%b); }
int lcm(int a, int b){ return a * (b / gcd(a, b)); }

int main(){
    int n, x;
    while(sc(n) && n){
        vector<int> v;
        for(int i=0;i<n;i++){
            sc(x);
            v.push_back(x);
        }
        int total = n*(n-1)/2, cnt = 0;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(v[i],v[j])==1) cnt++;
            }
        }
        cnt ? printf("%.6f\n",sqrt(6*total*1.0/cnt)) : printf("No estimate for this data set.\n");
    }
    return 0;
}