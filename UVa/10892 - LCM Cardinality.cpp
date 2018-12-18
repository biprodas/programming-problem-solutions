#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int gcd(int a, int b){ return b==0 ? a : gcd(b, a%b); }
int lcm(int a, int b){ return a * (b / gcd(a, b)); }

vector<int> v;

void divisor(int n){
    v.clear();
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i != n/i) v.push_back(n/i);
        }
    }
}

int main(){
    int n;
    while(sc(n) && n){
        divisor(n);
        int sz = v.size(), cnt=0;
        for(int i=0;i<sz;i++){
            for(int j=i;j<sz;j++){
                if(lcm(v[i],v[j])==n) cnt++;
            }
        }
        printf("%d %d\n", n, cnt);
    }
    return 0;
}