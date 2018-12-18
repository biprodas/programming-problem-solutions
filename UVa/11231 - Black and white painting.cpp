#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int n, m, c;
    while(cin>>n>>m>>c){
        if(!n && !m && !c) break;
        int ans = c? ((n-7)*(m-7)+1)/2 : (n-7)*(m-7)/2;
        cout<<ans<<endl;
    }
    return 0;
}