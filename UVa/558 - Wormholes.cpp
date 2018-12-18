#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define pb push_back
#define MX 1003

vector<pii> G[MX];

int t, n, m , u , v , w , dis[MX];

void BellmanFord(){
    dis[0]=0;
    for(int i=0;i<n-1;i++){
        for(int u=0;u<n;u++){
            for(int j=0;j<G[u].size();j++){
                v= G[u][j].second;
                w= G[u][j].first;
                //Relaxation
                if(dis[v] > dis[u]+w){
		            dis[v]= dis[u]+w;
                }
            }
        }
    }
}
bool hasNegCycle(){
    for(int u=0;u<n;u++){
        for(int i=0;i<G[u].size();i++){
            v= G[u][i].second;
            w= G[u][i].first;
            if(dis[v] > dis[u]+w) //if this is still possible
		        return true;
        }
    }
    return false;
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            G[i].clear();
            dis[i]= 1e9;
        }
        while(m--){
            cin>>u>>v>>w;
            G[u].pb({w,v});
        }
        BellmanFord();
        hasNegCycle()? printf("possible\n") : printf("not possible\n");
    }
    
    return 0;
}