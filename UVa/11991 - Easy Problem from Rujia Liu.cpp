#include <bits/stdc++.h>
using namespace std;
#define N 1000005

vector<int> g[N];

int main(){
    int n, m, x, k, v;
	
    while(scanf("%d %d", &n, &m) != EOF) {
        for(int i=0; i<N; i++) g[i].clear();
	for(int i=1; i<=n; i++){
	    scanf("%d", &x);
	    g[x].push_back(i);
	}

	for(int i=0; i<m; i++) {
	    scanf("%d %d", &k, &v);
	    (k-1 < g[v].size()) ? printf("%d\n", g[v][k-1]) : printf("0\n");
	}
    }

    return 0;
}