#include <bits/stdc++.h>
using namespace std;

int lt[100005], rt[100005];

int main() {
    int s, b;

    while(cin>>s>>b){
        if(!s && !b) break;
	    
	for(int i=1; i<=s; i++){
	    lt[i] = i - 1;
	    rt[i] = i + 1;
	}
	lt[1] = -1;
	rt[s] = -1;

	int l, r;
	for(int i=0; i<b; i++){
	    cin>>l>>r;
	    lt[rt[r]] = lt[l];
	    (lt[l] != -1) ? printf("%d", lt[l]) : printf("*");

	    rt[lt[l]] = rt[r];
	    (rt[r] != -1) ? printf(" %d\n", rt[r]) : printf(" *\n");
	}
	printf("-\n");
    }

    return 0;
}
