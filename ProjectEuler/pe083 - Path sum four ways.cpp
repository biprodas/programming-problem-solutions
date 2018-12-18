#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define pii pair<int, int>
#define piii pair<int, pii>
#define inf 1e9
#define MX 1003

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int grid[MX][MX];
//int grid[] = { #include "matrix.txt" };
int dis[MX][MX];
int R, C;

struct Cell{
    int row, col, val;
    Cell(){}
    Cell(int r, int c, int v){
        row = r;
        col = c;
        val = v;
    }
    bool operator<( const Cell& X ) const{
        return val > X.val;
    }
};

bool ok(int x, int y){
    return ((x>=0 && x<R) && (y>=0 && y<C));
}

int Dijkstra(){
    priority_queue<Cell> PQ;
    PQ.push(Cell(0, 0, grid[0][0]));
    dis[0][0] = grid[0][0];
    while(!PQ.empty()){
        Cell p = PQ.top();
        PQ.pop();
        for(int i=0;i<4;i++){
            int x = p.row + dx[i];
            int y = p.col + dy[i];
            if(ok(x, y) && dis[x][y] > p.val + grid[x][y]){
                dis[x][y] = p.val + grid[x][y];
                PQ.push(Cell(x, y, dis[x][y]));
            }
        }
    }
    return dis[R-1][C-1];
}

int main(){
    freopen("in.txt", "r", stdin);
        R= 80, C= 80;
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                //sc(grid[i][j]);
                scanf("%d,", &grid[i][j]);
                dis[i][j] = inf;
            }
        }

        int ans = Dijkstra();
        printf("%d\n", ans);
    return 0;
}

/* Answer : 425185 */