#include <bits/stdc++.h>
using namespace std;

int n, q;
int ar[100005];

int main() {
    int t;
    scanf("%d", &t);
    for(int cs=1;cs<=t;cs++){
        scanf("%d %d", &n, &q);
        for(int i=0;i<n;i++){
            scanf("%d", &ar[i]);
        }

        printf("Case %d:\n", cs);
        int x, y, ans=0;
        for(int k=0; k<q;k++) {
            int p, q, cnt = 0;
            scanf("%d %d", &x, &y);
            ans = upper_bound(ar, ar+n, y) - lower_bound(ar, ar+n, x);
            printf("%d\n", ans);
        }
    }
    return 0;
}
