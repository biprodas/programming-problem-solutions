#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define MX 10003

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
vector<pii> city;
int n, r;

int mstKruskal(){
    sort(edges.begin(), edges.end());
    init();
    double roads = 0, rails = 0;
    int states = 1, sz = edges.size();
    for(int i=0;i<sz;i++){
        int u = edges[i].u;
        int v = edges[i].v;
        double w = edges[i].w;
        if(!isConnect(u, v)){
            connect(u, v);
            if(w > r) states++, rails += w;
            else roads += w;
        }
    }
    printf("%d %.0f %.0f\n",states, roads, rails);
    
}

int main(){
    int t, cs=0, x, y;
    sc(t);
    while(t--){
        edges.clear();
        city.clear();
        scc(n, r);
        for(int i=0; i<n; i++){
            scc(x, y);
            city.pb({x, y});
        }
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n;j++){
                double d = sqrt(pow(city[i].first - city[j].first, 2) + pow(city[i].second - city[j].second, 2));
                edges.pb(Edge(i, j, d));
            }
        }
        printf("Case #%d: ", ++cs);
        mstKruskal();
    }
    return 0;
}