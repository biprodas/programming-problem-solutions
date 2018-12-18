#include<bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%d",&x)
#define sff(x, y) scanf("%d %d",&x, &y)
#define pb push_back
#define inf 1e9

//map<int, vector<int> > net;
//vector< vector<int> > net;
vector<int> net[303];
bool vis[303];
int parent[303];

void clear(){
    memset(vis,false,sizeof(vis));
    memset(parent, -1, sizeof(parent));
}

int bfs(int s){
    clear();
    queue<int> Q;
    Q.push(s);
    vis[s]=true;
    parent[s]=0;
    while(!Q.empty()){
        int p = Q.front();
        Q.pop();
        int sz = net[p].size();
        for(int i=0;i<sz;i++){
            int v = net[p][i];
            if(!vis[v]){
                Q.push(v);
                parent[v] = p;
                vis[v] = true;
            }
        }
    }
}

void printPath(int d){
    if(parent[d]==0){
        printf("%d", d);
        return;
    }
    printPath(parent[d]);
    printf(" %d", d);
}

int main(){
    int n;
    while(cin>>n && n){
        for(int i=0;i<303;i++) 
            net[i].clear();
        while(n--){
            int u, v;
            string line;
            char garbage;
            cin>>u;
            getline(cin, line);
            stringstream ss(line);
            while(ss>>garbage>>v){
                net[u].pb(v);
            }
        }
        printf("-----\n");
        int m, source, target;
        cin>>m;
        //cout<<m<<endl;
        while(m--){
            cin>>source>>target;
            bfs(source);
            if(parent[target]==-1) printf("connection impossible");
            else printPath(target);
            cout<<endl;
        }
    }

    return 0;
}


