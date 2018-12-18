#include<bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%d",&x)
#define sff(x, y) scanf("%d %d",&x, &y)
#define pb push_back
#define inf 1e9

map<string, vector<string> > graph;
map<string, bool> vis;
map<string, string> route;

void bfs(string s, string d){
    vis.clear();
    route.clear();
    queue<string> Q;
    Q.push(s);
    vis[s] = 1;
    while(!Q.empty()){
        string p = Q.front();
        Q.pop();
        if(p==d) return;
        int sz = graph[p].size();
        for(int i=0; i<sz; i++){
	    string  v = graph[p][i];
	    if(!vis[v]){
                Q.push(v);
                route[v] = p;
                vis[v] = true;
            }
        }
    }
}	

void printPath(string s){
    if(route[s]=="") return;
    printPath(route[s]);
    cout<<route[s]<<" "<<s<<endl;
}

int main(){
    int n, blank=0;
    while(sf(n) != EOF){
        graph.clear();
        string u, v;
        while(n--){
            cin>>u>>v;
            graph[u].pb(v);
            graph[v].pb(u);
        }
        cin>>u>>v;
        bfs(u, v);
        if(blank) printf("\n"); blank=1;
        if(route[v] == "") printf("No route\n");
        else printPath(v);
    }
    return 0;   
}