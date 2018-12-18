#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
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
vector< pair<float,float> > pos;

double mstKruskal(int n){
    sort(edges.begin(), edges.end());
    init();
    double res = 0;
    int sz = edges.size(), nodes=0;
    for(int i=0;i<sz;i++){
        int u = edges[i].u;
        int v = edges[i].v;
        double w = edges[i].w;
        if(!isConnect(u, v)){
            connect(u, v);
            res += w;
            nodes++;
            if(nodes==n) return res;
        }
    }
    return res;
}

int main(){
    int t, cs=0, n;
    sc(t);
    while(t--){
        edges.clear();
        pos.clear();
        sc(n);
        float x, y;
        for(int i=0; i<n; i++){
            scanf("%f %f", &x, &y);
            pos.pb({x, y});
        }
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n;j++){
                double d = sqrt(pow(pos[i].first - pos[j].first, 2) + pow(pos[i].second - pos[j].second, 2));
                edges.pb(Edge(i, j, d));
            }
        }
        printf("%.2lf\n",mstKruskal(n));
        if(t) printf("\n");
    }
    return 0;
}