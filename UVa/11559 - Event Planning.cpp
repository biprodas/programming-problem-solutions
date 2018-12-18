#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, B, H, W;

    while(cin>>N>>B>>H>>W){
        int p, mx, a, ans=INT_MAX;
        for(int i=0; i<H; i++){
            cin>>p;
            mx=0;
            for(int j=0; j<W; j++){
                cin>>a;
                mx = max(mx, a);
            }
            if(mx >= N) ans = min(ans, N*p);
        }
        ans<=B ? printf("%d\n", ans) : printf("stay home\n");
    }
    
    return 0;
}
