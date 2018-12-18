#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 2003

//dsu
int parent[MX];
void init() { for(int i=0;i<=MX;i++) parent[i]=i; }
int root(int r) { return parent[r]= (parent[r]==r) ? r : root(parent[r]); }
bool isConnect(int A, int B) { return root(A)==root(B); }
int connect(int A, int B) { parent[root(A)] = root(B); }

struct Edge{
    int u, v;
    int w;
    Edge(int U, int V, int W){ 
        u = U; v = V; w = W; 
    }
    bool operator < (const Edge& p) const {
        return w < p.w; 
    }
};

vector<Edge> edges;

int mstKruskal(int n){
    init();
    sort(edges.begin(), edges.end());
    int sz = edges.size(), nodes=0, minCost=0;
    for(int i=0;i<sz;i++){
        int u = edges[i].u;
        int v = edges[i].v;
        if(!isConnect(u, v)){
            connect(u, v);
            minCost += edges[i].w;
            nodes++;
            if(nodes==n) return minCost;
        }
    }
    return minCost;
}

int main(){
    int t, m, n;
    cin>>t;
    while(t--){
        edges.clear();
        cin>>m>>n;
        string u, v;
        int w, nodes=0;
        map<string, int> mp;
        while(n--){
            cin>>u>>v>>w;
            if(!mp[u]) mp[u] = ++nodes;
            if(!mp[v]) mp[v] = ++nodes;
            edges.pb(Edge(mp[u], mp[v], w));
        }
        printf("%d\n",mstKruskal(m));
        if(t) printf("\n");
    }
    return 0;
}