#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int ar[1003];

int main(){
    int t, n;
    sc(t);
    while(t--){
        sc(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            sc(ar[i]);
            sum += ar[i];
        }
        float av = sum/(n*1.0);
        int cnt=0;
        for(int i=0; i<n; i++){
			if(ar[i]>av) cnt++;
		}
		float ans = (cnt*100)/(n*1.0);
		printf("%.3f",ans);
		puts("%");
	}
	return 0;
}