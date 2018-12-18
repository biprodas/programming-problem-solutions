#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n, x;
    scanf("%d", &t);
    for(int cs=1;cs<=t;cs++){
        printf("Case %d: ",cs);
        scanf("\n%d", &n);
        int sum = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &x);
            if (x > 0) sum += x;
        }
        printf("%d\n",sum);
    }
    return 0;
}