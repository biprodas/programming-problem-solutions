#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define MX 105

//queue<int> Q; //if ask for any order sorting
priority_queue<int, vector<int>, greater<int> > PQ; //for lexicographically sorting
vector<int> graph[MX], T;
int inDegree[MX];
int N, M;

void clear(){
    for(int i=0;i<MX;i++) graph[i].clear();
    T.clear();
    memset(inDegree,0,sizeof(inDegree));
    while(!PQ.empty()) PQ.pop();
}

void topSort(){
    while(!PQ.empty()){
        int u = PQ.top();
        PQ.pop();
        T.pb(u);
        int sz = graph[u].size();
        for(int i=0; i<sz; i++){
            int v = graph[u][i];
            inDegree[v]--;
            if(inDegree[v]==0)
                PQ.push(v);
        }
    }
}

int main(){
    int cs=0;
    string u, v;
    while(sc(N) != EOF){
        clear();
        map<string, int> mpsi;
        map<int, string> mpis;
        for(int i=1;i<=N;i++){
            cin>>u;
            mpsi[u]=i;
            mpis[i]=u;
        }
        sc(M);
        for(int i=0;i<M;i++){
            cin>>u>>v;
            graph[mpsi[u]].pb(mpsi[v]);
            inDegree[mpsi[v]]++;
        }
        for(int i=1;i<=N;i++){
            if(inDegree[i]==0){
                PQ.push(i);
            }
        }

        topSort();
        
        printf("Case #%d: Dilbert should drink beverages in this order:",++cs);
        for(auto a: T) cout<<" "<<mpis[a];
        printf(".\n\n");
    }
    
    return 0;
}