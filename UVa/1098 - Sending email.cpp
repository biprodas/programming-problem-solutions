#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define pb push_back
#define sf(x) scanf("%d",&x)
#define sfff(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sffff(x,y,z,w) scanf("%d%d%d%d",&x,&y,&z,&w)
#define pf(i,x) printf("Case #%d: %d\n",i,x)
#define ps(i) printf("Case #%d: unreachable\n",i)
#define inf 1e9
#define MX 20004

int dis[MX];
vector<pii> graph[MX];

void Dijkstra(int s){
    priority_queue< pii,vector<pii>,greater<pii> > pq; //MinHeap
    dis[s]= 0;
    pq.push({dis[s],s});
    while(!pq.empty()){
        int u= pq.top().second;
        pq.pop();
        int sz = graph[u].size();
        for(int i=0;i<sz;i++){
            int v = graph[u][i].second;
            int w = graph[u][i].first;
            if(dis[v] > dis[u]+w){
                dis[v]= dis[u]+w;
                pq.push({dis[v],v});
            }
        }
    }
}
 
void clr(){
    for(int i=0;i<MX;i++){
        dis[i] = inf;
        graph[i].clear();
    }
}
int main(){
    int tc;
    sf(tc);
    for(int i=1;i<=tc;i++){
        clr();
        int n, m, s, t;
        sffff(n,m,s,t);
        for(int j=1;j<=m;j++){
            int u, v, w;
            sfff(u,v,w);
             graph[u].pb({w,v});
             graph[v].pb({w,u}); //undirected graph
        }
 
        Dijkstra(s);
        dis[t]==inf ? ps(i) : pf(i,dis[t]);
    }
    return 0;
}