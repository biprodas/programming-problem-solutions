#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    while(scanf("%d : %d", &h, &m)){
        if(h==0 && m==0) break;
        float angle = abs(0.5 * (60*h - 11*m));
        float ans = min(angle, 360-angle);
        printf("%.3f\n", ans);
    }
    return 0;
}
