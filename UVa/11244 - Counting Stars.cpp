#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define MX 103

int dx[]= {-1,-1,-1,0,0,1,1,1};
int dy[]= {-1,0,1,-1,1,-1,0,1};

char grid[103][103];
int N, M;

bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=M) return false;
    return true;
}
 
int bfs(int i, int j){
    queue<pii> Q;
    Q.push({i,j});
    grid[i][j] = '.';
    int flag=1;
    while(!Q.empty()){
        pii p = Q.front();
        Q.pop();
        for(int k=0; k<8; k++){
            int x = p.first + dx[k];
            int y = p.second + dy[k];
            if(valid(x,y) && grid[x][y]=='*'){
                Q.push({x,y});
                grid[x][y]='.';
                flag = 0;
            }
        }
    }
    return flag;
}
 
int main (){

    while(scc(N,M) && N && M){
        for(int i=0; i<N; i++) 
            scanf ("%s", grid[i]);
        int cnt = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(grid[i][j] == '*')
                    cnt += bfs(i,j);
            }
        }
        printf ("%d\n", cnt);
    }
 
    return 0;
}
