#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 103

int dx[]={1,1,1,0,0,-1,-1,-1};
int dy[]={1,0,-1,1,-1,1,0,-1};

string grid[MX];
bool vis[MX][MX];
vector<pii> cell;
int M, N;

bool valid(int x, int y){
    if(x<0 || x>=M || y<0 || y>=N) return 0;
    return 1;
}

int bfs(int i, int j){
    memset(vis,0,sizeof(vis));
    queue<pii> Q;
    Q.push({i,j});
    vis[i][j] = 1;
    int cnt=1;
    while(!Q.empty()){
        pii p = Q.front();
        Q.pop();
        for(int k=0;k<8;k++){
            int x = p.first + dx[k];
            int y = p.second + dy[k];
            if(valid(x,y) && !vis[x][y] && grid[x][y]=='W'){
                Q.push({x,y});
                vis[x][y]=1;
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int t, cs=0, blank=0;
    scanf("%d\n",&t);
    
    while(t--){
        int i=0, a, b;
        cell.clear();
        while(getline(cin, grid[i]) && grid[i]!=""){
            if(isdigit(grid[i][0])){
                stringstream ss(grid[i]);
                ss>>a>>b;
                cell.pb({a,b});
            }
            else{
                //cout<<grid[i]<<endl;
                i++;
            }
        }
        M=i, N=grid[0].size();
        if(blank) puts(""); blank=1;
        for(auto a: cell){
            printf("%d\n", bfs(a.first-1, a.second-1));
        }
    }
}