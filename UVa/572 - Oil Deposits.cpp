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
int M, N;

bool valid(int x, int y){
    if(x<0 || x>=M || y<0 || y>=N) return 0;
    return 1;
}

void bfs(int i, int j){
    queue<pii> Q;
    Q.push({i,j});
    grid[i][j] = '*';
    while(!Q.empty()){
        pii p = Q.front();
        Q.pop();
        for(int k=0;k<8;k++){
            int x = p.first + dx[k];
            int y = p.second + dy[k];
            if(valid(x,y) && grid[x][y]=='@'){
                Q.push({x,y});
                grid[x][y]='*';
            }
        }
    }
}

int main(){
    int cs=0;
    while(scc(M,N) && M){
        for(int i=0;i<M;i++){
            cin>>grid[i];
        }
        int cnt=0;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]=='@'){
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}