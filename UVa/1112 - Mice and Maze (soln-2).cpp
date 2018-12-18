//floyd Warshall Algorithm
#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define sccc(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define inf 1e9

int matrix[105][105];

int main() {
    int tc;
    sc(tc);
    while(tc--){
        int N, E, T, M, u, v, t;
	sccc(N, E, T);
	sc(M);
	
	memset(matrix, 63, sizeof(matrix));

	while(M--){
	    sccc(u, v, t);
	    matrix[u][v] = t;
	}
		
	for(int k=0; k<=N; k++){
	    for(int i=0; i<=N; i++){
		for(int j=0; j<=N; j++){
		    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
		}
 	    }
	}

	int ans = 1;
	for(int i=0; i<=N; i++){
	    if(matrix[i][E]<=T)
	        ans++;
	}
	printf("%d\n", ans);
	if(tc) printf("\n");
    }

    return 0;
}