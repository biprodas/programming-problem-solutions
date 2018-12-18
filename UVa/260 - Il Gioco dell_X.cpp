#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 203

int dx[] = {-1, -1, 0, 0, 1, 1};
int dy[] = {-1, 0, -1, 1, 0, 1};

char grid[MX][MX];
bool vis[MX][MX];
int N;

bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=N) return 0;
    return 1;
}

int bfs(int j){
    memset(vis,0,sizeof(vis));
    queue<pii> Q;
    Q.push({0,j});
    vis[0][j] = 1;
    
    while(!Q.empty()){
        pii p = Q.front();
        Q.pop();
        if(p.first == N-1) return 1;
        for(int k=0;k<6;k++){
            int x = p.first + dx[k];
            int y = p.second + dy[k];
            if(valid(x,y) && !vis[x][y] && grid[x][y]=='b'){
                Q.push({x,y});
                vis[x][y]=1;
            }
        }
    }
    
    return 0;
}

int main(){
    int cs=0;
    while(sc(N) && N){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>grid[i][j];
            }
        }
        int black=0;
        for(int j=0;j<N;j++){
            if(grid[0][j]=='b') black = bfs(j);
            if(black) break;
        }
        printf("%d ", ++cs);
        black ? puts("B") : puts("W");
    }
}