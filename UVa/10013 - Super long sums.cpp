#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long
#define MX 1000006

int main(){
    int n, m, blank=0;
    sc(n);
    while(n--){
        sc(m);
        string a(m,' '), b(m,' '), sum(m,' ');
        for(int i=0;i<m;i++){
            cin>>a[i]>>b[i];
        }
        int carry = 0;
        for(int i=m-1;i>=0;i--){
            carry += (a[i]-'0') + (b[i]-'0');
            sum[i] = carry%10 + '0';
            carry = carry/10;
        }
        if(blank) puts(""); blank = 1;
        if(carry) cout<<carry;
        cout<<sum<<endl;
    }
}