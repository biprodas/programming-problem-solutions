#include <bits/stdc++.h>
using namespace std;
#define lng long long
 
int main() {
    //freopen("in.txt", "r", stdin);
    int t;
    char a[200], b[200];
    scanf("%d", &t);
    for(int cs=1;cs<=t;cs++){
        scanf("%s %s", a, b);
 
        lng res1 = 0, res2 = 0;
 
        char *p;
        p = strtok( a, "." );
        while(p) {
            int k;
            sscanf(p, "%d", &k);
            res1 = res1 * 256 + k;
            p = strtok( NULL, "." );
        }
 
        p = strtok( b, "." );
        while(p) {
            int k = 0;
            for( int i = 0; p[i]; i++ ) k = k * 2 + p[i] - 48;
            res2 = res2 * 256 + k;
            p = strtok( NULL, "." );
        }
 
        printf("Case %d: %s\n", cs, res1 == res2 ? "Yes" : "No");
    }
    return 0;
}