#include <bits/stdc++.h>
using namespace std;
 
int main (){
    int t, n, m, x;
    cin>>t;
 
    while(t--){
        map<int, int> freq;
        scanf ("%d %d", &n, &m);
        
        for(int i=0; i<n; i++){
            scanf("%d", &x);
            freq[x]++;
        }
        for(int i=0; i<m; i++){
            scanf ("%d", &x);
            freq[x]--;
        }
 
        int ans = 0;
        for(auto a: freq) ans += abs(a.second);
 
        printf("%d\n", ans);
    }
 
    return 0;
}