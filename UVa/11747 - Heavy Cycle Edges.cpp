#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pb push_back
#define inf 1e9
#define MX 200005

//dsu
int parent[MX];
void init() { for(int i=0;i<=MX;i++) parent[i]=i; }
int root(int r) { return parent[r]= (parent[r]==r) ? r : root(parent[r]); }
bool isConnect(int A, int B) { return root(A)==root(B); }
int connect(int A, int B) { parent[root(A)] = root(B); }

struct Edge{
    int u, v, w;
    Edge(int U, int V, int W){ 
        u = U; v = V; w = W; 
    }
    bool operator < (const Edge& p) const {
        return w < p.w; 
    }
};

vector<Edge> edges;

void mstKruskal(){
    sort(edges.begin(), edges.end());
    init();
    vector<int> ar;
    int sz = edges.size(), cycle=0;
    for(int i=0; i<sz; i++){
        int u = edges[i].u;
        int v = edges[i].v;
        if(!isConnect(u, v)) connect(u, v);
        else{
            ar.pb(edges[i].w);
            cycle = 1;
        }
    }
    if(!cycle) printf("forest");
    else{
        sort(ar.begin(), ar.end());
        bool space = 0;
        for(auto a: ar) {
            if(space) printf(" ");
            space = 1;
            printf("%d", a);
        }
    }
}

int main(){
    int m, n;
    while(scc(m,n) && m && n){
        edges.clear();
        int u, v, w;
        while(n--){
            sccc(u, v, w);
            edges.pb(Edge(u, v, w));
        }
        mstKruskal();
        printf("\n");
    }
    return 0;
}

