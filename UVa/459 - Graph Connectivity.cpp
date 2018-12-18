#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 30

vector<int> graph[MX];
bool vis[MX];
int N;

void dfs(int s){
    vis[s]=true;
    for(int i=0; i<graph[s].size(); i++){
        if(!vis[graph[s][i]])
           dfs(graph[s][i]);
    }
}

int main(){
    int t, blank=0;
    scanf("%d\n",&t);
    while(t--){
        memset(vis,0,sizeof(vis));
        for(int i=0;i<MX;i++) graph[i].clear();
        string s;
        getline(cin,s);
        N = (s[0]-'A') + 1;
        //cout<<N<<endl;
        while(getline(cin,s) && s!=""){
            //cout<<s<<endl;
            int u = s[0]-'A', v = s[1]-'A';
            graph[u].pb(v);
            graph[v].pb(u);
        }
        int cnt=0;
        for(int i=0; i<N; i++){
            if(!vis[i]){
                dfs(i);
                cnt++;
            }
        }
        if(blank) puts(""); blank=1;
        printf("%d\n",cnt);
    }

    return 0;
}
