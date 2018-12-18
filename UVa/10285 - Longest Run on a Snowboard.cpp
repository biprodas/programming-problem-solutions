#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define MX 103

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int grid[MX][MX], dp[MX][MX];
int R, C;

bool valid(int x, int y){
    return (x>=0 && y>=0 && x<R && y<C);
}

int solve(int i , int j){
    if(!valid(i,j)) return 0; 
    if(dp[i][j] != -1) return dp[i][j];
    int ret = 0;
    for(int k=0; k<4; k++){
        int x = i + dx[k] ;
        int y = j + dy[k] ;
        if(valid(x,y) && grid[i][j] > grid[x][y])
            ret = max(ret, 1 + solve(x,y));
    }
    return dp[i][j] = ret;
}

int main() {
    int t;
    sc(t);
    while(t--){
        string name;
        cin>>name>>R>>C;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++)
                sc(grid[i][j]);
        }
        int mx=0;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                memset(dp,-1,sizeof(dp));
                mx = max(mx, solve(i,j));
            }
        }
        printf("%s: %d\n", name.c_str(), mx+1);
    }
}
