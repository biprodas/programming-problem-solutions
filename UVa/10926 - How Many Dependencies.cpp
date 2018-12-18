#include<bits/stdc++.h>
using namespace std;
#define M 101
vector<int> g[M];
int vis[M];
int n, q;

int dfs(int u){
	if(vis[u]) return 0;
	vis[u] = 1;
	int ret = 1;
	for(int i=0;i<g[u].size();i++){
		ret += dfs(g[u][i]);
	}
	return ret;
} 

int main(){
    int q, u, v;
    while(cin>>n){
        if(n==0) break;
        for(auto & v : g){
            v.clear();
        }
        for(int u=1;u<=n;u++){
            cin>>q;
            while(q--){
                cin>>v;
                g[u].push_back(v);
            } 
        }

        int mx=0, ans;
        for(int i=1;i<=n;i++){
            memset(vis,0,sizeof(vis));
            int d= dfs(i);
            if(mx<d){
                mx= d;
                ans= i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}