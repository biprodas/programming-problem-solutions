#include<bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%d",&x)
#define pb push_back

vector<int> graph[2503];
bool vis[2503];
int freq[2503];
int level[2503];

int bfs(int s){
    memset(vis,false,sizeof(vis));
    memset(level,-1, sizeof(freq));
    memset(freq,0, sizeof(freq));
    queue<int> Q;
    Q.push(s);
    vis[s] = true;
    level[s]=0;
    freq[s] = 0;
    int k=0;
    while(!Q.empty()){
        int p = Q.front();
        Q.pop();
        freq[level[p]]++;
        int sz = graph[p].size();
        for(int i=0;i<sz;i++){
            int v = graph[p][i];
            if(!vis[v]){
                Q.push(v);
                level[v] = level[p] + 1;
                k = level[v];
                vis[v] = true;
            }
        }
    }
    int M=freq[0], D, i=0;
    if(freq[0]==freq[1]) D = 1;
    for(i=1;i<=k;i++){
        if(freq[i]>M){
            M = freq[i];
            D = i;
        }
    }
    freq[D] ? printf("%d %d\n", M, D) : printf("0\n") ;
}

int main(){
    int E;
    sf(E);
    for(int u=0; u<E; u++){
        int N, v;
        sf(N);
        while(N--){
            sf(v);
            graph[u].pb(v); //directed graph
        }
    }
    int t, s;
    sf(t);
    while(t--){
        sf(s);
        bfs(s);
    }
    
    return 0;
}