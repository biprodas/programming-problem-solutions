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
    if(route[s]==""){
        printf("%c",s[0]);
	return;
    }
    printPath(route[s]);
    printf("%c",s[0]);
}

int main(){
    int T;
    cin>>T;

    for(int t=0;t<T;t++){
        graph.clear();
	int m,n;
	cin>>m>>n;
	string u, v;
	while(m--){
	    cin>>u>>v;
	    graph[u].push_back(v);
	    graph[v].push_back(u);
	}
	string s, d;
	if(t) printf("\n");
	while(n--){
	    cin>>s>>d;
	    bfs(s, d);
	    printPath(d);
	    printf("\n");
	}	
    }

    return 0;   
}