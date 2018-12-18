#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define inf 1e9
#define MX 103

int graph[MX][MX];

void reset(){
    for(int i=0;i<MX;i++){
        for(int j=0;j<MX;j++)
            graph[i][j] = inf;
    }
}

void floyd_warshall(int n){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                graph[i][j] = min(graph[i][j], max(graph[i][k], graph[k][j]));
            }
        }
    }
}

int main(){
    int C, S, Q, cs=0, blank=0;
    
    while(sccc(C,S,Q)){
        if(C==0 && S==0 && Q==0) break;
        reset();
        int u, v, d;
        
        while(S--){
            sccc(u,v,d);
            graph[u][v] = graph[v][u] = d;
        }
        
        floyd_warshall(C);
        
        if(blank) printf("\n"); blank=1;
        printf("Case #%d\n", ++cs);
        
        while(Q--){
            scc(u,v);
            graph[u][v]==inf ? printf("no path\n") : printf("%d\n", graph[u][v]);
        }
    }
    
    return 0;
}