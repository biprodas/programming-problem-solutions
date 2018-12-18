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
int N;

bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=N) return false;
    return true;
}
 
void dfs (int x, int y){
    if(!valid(x, y) || grid[x][y]=='.') return;
    grid[x][y] = '.';

    for(int k=0; k<8; k++)
        dfs(x+dx[k], y+dy[k]);
}
 
int main (){
    int t, cs=0; 
    sc(t);

    while(t--){
        sc(N);
        for(int i=0; i<N; i++) 
            scanf ("%s", grid[i]);
            
        int cnt = 0;
        for(int i=0; i<N; i++){
            for( int j=0; j<N; j++){
                if(grid[i][j] == 'x') {
                    cnt++;
                    dfs(i, j);
                }
            }
        }
 
        printf ("Case %d: %d\n", ++cs, cnt);
    }
 
    return 0;
}
