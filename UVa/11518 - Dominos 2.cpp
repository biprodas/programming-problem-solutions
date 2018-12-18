#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define MX 10004

vector<int> graph[MX];
int vis[MX];

void dfs(int u){
    vis[u] = 1;
    for(int i=0; i<graph[u].size(); i++){
        int v = graph[u][i];
        if(!vis[v]) dfs(v);
    }
}

int main(){
    int t, n, m, l, u, v;
    sc(t);
    while(t--){
        sccc(n,m,l);
        for(int i=0; i<=n; i++){
            graph[i].clear();
            vis[i] = 0;
        }
        while(m--){
            scc(u,v);
            graph[u].pb(v);
        }
        while(l--){
            sc(u);
            dfs(u);
        }
        int ans=0;
        for(int i=1;i<=n;i++) ans += vis[i];
        printf("%d\n",ans);
    }
    return 0;
}