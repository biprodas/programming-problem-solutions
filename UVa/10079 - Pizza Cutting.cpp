#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    lng n;
    while(cin>>n && n>=0){
        lng ans = n*(n+1)/2 + 1;
        cout<<ans<<endl;
    }
    return 0;
}
