#include<bits/stdc++.h>
using namespace std;
#define pb push_back

//vector< vector<int> > network;
vector<int> network[33];
map<int, int> mp;
int level[33];

int bfs(int s, int ttl){
    int reachable = 0;
    memset(level, -1, sizeof(level));
    queue<int> Q;
    Q.push(s);
    level[s]=0;
    while(!Q.empty()){
        int u = Q.front();
        if(level[u]>ttl) return reachable;
        //cout<<level[u]<<endl;
        ++reachable;
        Q.pop();
        int sz = network[u].size();
        for(int i=0;i<sz;i++){
            int v = network[u][i];
            if(level[v]==-1){    //not visited
                Q.push(v);
                level[v] = level[u] + 1;
                //reachable += 1;
            }
        }
    }
    return reachable;
}

int main(){
    int n, cs=0;
    while(scanf("%d",&n) && n){
        int n1, n2, node = 0, source, ttl;
        for(int i=0;i<33;i++) network[i].clear();
        mp.clear();
        
        while(n--){
            scanf("%d %d", &n1, &n2);
            if(mp[n1]==0) mp[n1]= ++node;   //1 based node
            if(mp[n2]==0) mp[n2]= ++node;
            int u = mp[n1], v=mp[n2];
            network[u].pb(v);
            network[v].pb(u);
        }
        while(scanf("%d %d", &source, &ttl)){
            if(source==0 && ttl==0) break;
            int reachable = bfs(mp[source], ttl);
            int unreachable = node - reachable;
            //cout<<node<<" "<<reachable<<endl;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++cs, unreachable, source, ttl);
        }

    }
    return 0;
}