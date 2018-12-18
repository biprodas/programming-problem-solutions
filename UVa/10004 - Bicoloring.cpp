#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define sf(x) scanf("%d",&x)
#define sff(x,y) scanf("%d%d",&x,&y)
#define N 201
int color[N];

bool bfs(vector<int> g[]){
        queue<int> q;
        color[0]=0;
        q.push(0);
        while(!q.empty()){
            int u= q.front();
            q.pop();
            int sz= g[u].size();
            for(int i=0;i<sz;i++){
                int v= g[u][i];
                if(color[v]==-1){ //not yet visited
                    color[v]= color[u]==0 ? 1 : 0;
                    q.push(v);
                }
                else{
                    if(color[v]==color[u]){
                        return 1;
                    }
                }
            }
        }
    return 0;
}

int main(){
    int n, e, u, v;
    while(sf(n)){
        if(n==0) break;
        sf(e);
        vector<int> g[N];
        memset(color,-1,sizeof(color));
        for(int i=0;i<e;i++){
            sff(u,v);
            g[u].pb(v);
            g[v].pb(u);
        }
        bfs(g) ?cout<<"NOT BICOLORABLE.\n" : cout<<"BICOLORABLE.\n";
    }

    return 0;
}