#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 30

int dx[]={1,1,1,0,0,-1,-1,-1};
int dy[]={1,0,-1,1,-1,1,0,-1};

string grid[MX];
int N;

bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=N) return 0;
    return 1;
}

void bfs(int i, int j){
    queue<pii> Q;
    Q.push({i,j});
    grid[i][j] = '0';
    while(!Q.empty()){
        pii p = Q.front();
        Q.pop();
        for(int k=0;k<8;k++){
            int x = p.first + dx[k];
            int y = p.second + dy[k];
            if(valid(x,y) && grid[x][y]=='1'){
                Q.push({x,y});
                grid[x][y]='0';
            }
        }
    }
}

int main(){
    int cs=0;
    while(sc(N)!=EOF){
        for(int i=0;i<N;i++){
            cin>>grid[i];
        }
        int cnt=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]=='1'){
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++cs,cnt);
    }
}