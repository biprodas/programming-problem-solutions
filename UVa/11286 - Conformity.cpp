#include <bits/stdc++.h>
using namespace std;

main() {
    int n;
    while(scanf("%d", &n) && n) {
        map<vector<int>, int> combinationMap;
        vector<int> v(5);
        
        while(n--) {
            for(int i=0;i<5;i++) scanf("%d", &v[i]);
            sort(v.begin(), v.end());
            combinationMap[v]++;
        }

        int ans=0, mx=0;
        for(auto a: combinationMap){
            if(mx < a.second){
                mx = a.second;
                ans = 0;
            }
            if(mx == a.second) ans += mx;
        }
        
        printf("%d\n", ans);
    }

    return 0;
}
