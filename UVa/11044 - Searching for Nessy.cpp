#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        scanf("%d %d", &n, &m);
        n /=3;
        m /=3;
        int ans = n * m;
        printf("%d\n", ans);
    }
}

