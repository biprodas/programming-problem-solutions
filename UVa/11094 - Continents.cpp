#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 25

int dx[] ={0,0,1,-1};
int dy[] ={-1,1,0,0};


string grid[MX];
bool vis[MX][MX];
int M, N;
char land;

bool valid(int x, int y){
    if(x<0 || x>=M || y<0 || y>=N) return 0;
    return 1;
}

int floodFill(int x, int y){
    if(y==N) y=0; 
    else if(y==-1) y=N-1;
    if(!valid(x,y) || vis[x][y] || grid[x][y]!=land) return 0;
    vis[x][y] = 1;
    int ret=1;
    for(int k=0;k<4;k++){
        ret += floodFill(x+dx[k], y+dy[k]);
    }
    return ret;
}

int main(){

    while(scanf("%d %d\n", &M, &N) == 2){
        memset(vis,0,sizeof(vis));
        for(int i=0;i<M;i++){
            getline(cin,grid[i]);
            //cout<<grid[i]<<endl;
        }   
        int x, y, mx=0;
        scc(x,y);
        land = grid[x][y];
        floodFill(x,y);
        
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==land)
                    mx = max(mx, floodFill(i,j));
            }
        }
        printf("%d\n",mx);
    }
    
    return 0;
}