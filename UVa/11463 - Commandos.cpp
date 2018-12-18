#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define inf 1e9
#define MX 103

int graph[MX][MX];

int reset(){
    for(int i=0;i<MX;i++){
        for(int j=0;j<MX;j++)
            if(i==j) graph[i][j]=0;
            else graph[i][j] = inf;
    }
}

void floyd_warshal(int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j]= min(graph[i][j], graph[i][k]+graph[k][j]);
            }
        }
    }
}

int main(){
    int t, n, r, u, v, cs=0;
    sc(t);

    while(t--){
        reset();
        scc(n, r);
        
        while(r--){
            scc(u,v);
            graph[u][v] = 1;
            graph[v][u] = 1;
        }
        
        floyd_warshal(n);
        
        int s, d, minTime = 0;
        scc(s,d);

        for(int i=0;i<n;i++){
            if(graph[s][i]!=inf && graph[i][d]!=inf)
                minTime = max(minTime, graph[s][i] + graph[i][d]);
        }

        printf("Case %d: %d\n", ++cs, minTime);
    }
    
    return 0;
}