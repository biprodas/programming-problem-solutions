#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, mirrorHour, mirrorMin, realHour, realMin;

    cin>>t;

    while(t--){
        scanf("%d:%d", &mirrorHour, &mirrorMin);
        
        realHour = (12 + (12-mirrorHour)) % 12 - 1 + (mirrorMin==0);
        if(realHour<=0) realHour+=12;
        realMin = (60 - mirrorMin) % 60;
        
        printf("%02d:%02d\n", realHour, realMin);
    }

    return 0;
}
