//Dijkstra Algorithm
#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define sccc(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define  pii pair<int, int>
#define inf 1e9

vector<pii> g[101];
int N, E, T, M;
int dist[101];

int dijkstra(int s){
    memset(dist, 63, sizeof(dist));
    priority_queue < pii > pq;
    pq.push(pii(s, 0));
    dist[s] = 0;
    int from, to, t, cost;
    while(!pq.empty()){
        pii p = pq.top();
        pq.pop();
        int u = p.first;
        int sz = g[u].size();
        for(int i=0; i<sz; i++){
            int v = g[u][i].first;
            int t = g[u][i].second;
            if(dist[u] + t < dist[v]){
                dist[v] = dist[u] + t;
                pq.push({v, dist[v]});
            }
        }
    }
    int mices = 0;
    for(int i=1; i<=N; i++){
        if(dist[i] <= T)
            mices++;
    }
    return mices;
}

int main(){
    int tc;
    sc(tc);

    while(tc--){
        for(int i=1; i<=101; i++) g[i].clear();
        sccc(N, E, T);
        sc(M);
        while(M--){
            int u, v, t;
            sccc(u, v, t);
            g[v].push_back(pii(u, t)); //reversed direction
        }
        printf("%d\n", dijkstra(E));
        if(tc) printf("\n");
    }

    return 0;
}