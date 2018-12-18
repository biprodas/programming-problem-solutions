#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 1003

//dsu
int parent[MX];
void init() { for(int i=0;i<=MX;i++) parent[i]=i; }
int root(int r) { return parent[r]= (parent[r]==r) ? r : root(parent[r]); }
bool isConnect(int A, int B) { return root(A)==root(B); }
int connect(int A, int B) { parent[root(A)] = root(B); }

struct Edge{
    int u, v;
    double w;
    Edge(int U, int V, double W){ 
        u = U; v = V; w = W; 
    }
    bool operator < (const Edge& p) const {
        return w < p.w; 
    }
};

vector<Edge> edges;
vector<pii> pos;

double mstKruskal(int n){
    sort(edges.begin(), edges.end());
    init();
    int sz = edges.size(), nodes=0;
    for(int i=0;i<sz;i++){
        int u = edges[i].u;
        int v = edges[i].v;
        if(!isConnect(u, v)){
            connect(u, v);
            nodes++;
            if(nodes==n) return edges[i].w;
        }
    }
    return 0.0;
}

int main(){
    int t;
    sc(t);
    while(t--){
        edges.clear();
        pos.clear();
        int S, P, x, y;
        scc(S, P);
        for(int i=0; i<P; i++){
            scc(x,y);
            pos.pb({x, y});
        }
        for(int i=0; i<P; i++){
            for(int j=i+1;j<P;j++){
                double d = sqrt(pow(pos[i].first - pos[j].first, 2) + pow(pos[i].second - pos[j].second, 2));
                edges.pb(Edge(i, j, d));
            }
        }
        printf("%.2lf\n", mstKruskal(P-S));
    }
    return 0;
}