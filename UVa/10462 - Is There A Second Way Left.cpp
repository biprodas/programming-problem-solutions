#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 103

//dsu
int parent[MX];
void init() { for(int i=0;i<=MX;i++) parent[i]=i; }
int root(int r) { return parent[r]= (parent[r]==r) ? r : root(parent[r]); }
bool isConnect(int A, int B) { return root(A)==root(B); }
int connect(int A, int B) { parent[root(A)] = root(B); }

struct Edge{
    int u, v, w;
    Edge(int U, int V, int W) {
        u=U; v=V; w=W; 
    }
    bool operator < ( const Edge& p) const {
        return w < p.w; 
    }
};

vector<Edge> graphEdges;
vector<int> mstEdges;

int mstKruskal(int n,int idx){
    init();
    int sz = graphEdges.size(), nodes = 0, minCost = 0;
    for(int i=0; i<sz; i++){
        if(i==idx ) continue;
        int u = graphEdges[i].u;
        int v = graphEdges[i].v;
        if(!isConnect(u, v)){
            connect(u, v);
            if(idx==-1) mstEdges.pb(i);
            minCost += graphEdges[i].w;
            nodes++;
            if(nodes == n-1) return minCost;
        }
    }
    return -1;
}

int main(){
    int t, n, m, cs=0;
    sc(t);
    while(t--){
        graphEdges.clear();
        mstEdges.clear();
        scc(n, m);
        int u, v, w;
        for(int i=0; i<m; i++){
            sccc(u,v,w);
            graphEdges.pb(Edge(u,v,w));
        }
        sort(graphEdges.begin(), graphEdges.end());
        int best = mstKruskal(n,-1);
        int sz = mstEdges.size(), secondBest = inf;
        for(int i=0; i<sz; i++){
            int p = mstKruskal(n,mstEdges[i]);
            if(p!=-1) secondBest = min(secondBest, p);
        }
        
        //cout<<best<<" "<<secondBest<<endl;
        
        printf("Case #%d : ",++cs);
        if(n==1 && m==0) printf("No second way\n");
        else if(best==-1) printf("No way\n");
        else if(secondBest==inf) printf("No second way\n");
        else printf("%d\n", secondBest);
    }

    return 0;
}