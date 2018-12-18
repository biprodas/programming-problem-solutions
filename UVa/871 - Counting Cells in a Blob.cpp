#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define MX 30

int dx[]= {-1,-1,-1,0,0,1,1,1};
int dy[]= {-1,0,1,-1,1,-1,0,1};

string grid[MX];
int N, mx;

bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=N) return false;
    return true;
}
 
int dfs(int x, int y){
    if(!valid(x,y) || grid[x][y]=='0') return 0;
    grid[x][y] = '0';
    int ret=0;
    for(int k=0;k<8;k++){
        ret += dfs(x+dx[k], y+dy[k]);
    }
    return ret+1;
}
 
int main (){
    int t, x, y, blank=0;
    scanf("%d\n",&t);
    while(t--){
        int k=0;
        while(getline(cin, grid[k])){
            if(grid[k]=="") break;
            //cout<<grid[k]<<endl;
            k++;
        }
        N = k, mx=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]=='1')
                    mx = max(mx, dfs(i,j));
            }
        }
        if(blank) puts(""); blank=1;
        printf("%d\n", mx);
    }
 
    return 0;
}
