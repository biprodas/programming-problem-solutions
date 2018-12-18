#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define MX 103

int dx[]= {1, -1, 0, 0};
int dy[]= {0, 0, 1, -1};

string grid[MX];
int N, M;

bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=M) return false;
    return true;
}
 
int dfs(int x, int y){
    if(!valid(x,y) || grid[x][y]=='1') return 0;
    grid[x][y] = '1';
    int ret=0;
    for(int k=0;k<4;k++){
        ret += dfs(x+dx[k], y+dy[k]);
    }
    return ret+1;
}
 
int main (){
    int t, x, y, blank=0;
    sc(t);
    while(t--){
        scanf("%d %d\n", &x,&y);
        //cout<<x<<" "<<y<<endl;
        int i=0;
        while(getline(cin, grid[i])){
            if(grid[i]=="") break;
            //cout<<grid[i]<<endl;
            i++;
        }
        N = i, M = grid[0].size();
        if(blank) puts(""); blank=1;
        printf("%d\n", dfs(x-1,y-1));
    }
 
    return 0;
}
