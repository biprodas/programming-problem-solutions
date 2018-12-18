#include<bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%d",&x)
#define sff(x, y) scanf("%d %d",&x, &y)
#define pb push_back
#define inf 1e9

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int matrix[1003][1003];
int R, C;

struct Node{
    int row, col;
    Node(){};
    Node(int r, int c){
        row = r;
        col = c;
        matrix[row][col]=0;
    }
};

bool ok(int r, int c){
    if( r >= 0 && r < R && c >= 0 && c < C && matrix[r][c]<0) return true;
    return false;
}

int bfs(Node s){
    queue<Node> Q;
    Q.push(s);
    while(!Q.empty()){
        Node p = Q.front();
        Q.pop();
        
        for(int i=0;i<4;i++){
            int r = p.row + dx[i];
            int c = p.col + dy[i];
            if(ok(r, c)){
                Q.push(Node(r, c));
                matrix[r][c] = matrix[p.row][p.col] + 1;
            }
        }
    }
}

int main(){
    
    while(sff(R, C) && R && C){
        int row, rowNo, col, colNo;
        sf(row);
        memset(matrix, -1, sizeof(matrix));
        while(row--){
            sff(rowNo, col);
            while(col--){
                sf(colNo);
                matrix[rowNo][colNo] = inf;
            }
        }
        int sourceX, sourceY, disX, disY;
        sff(sourceX, sourceY);
        sff(disX, disY);
        
        bfs(Node(sourceX, sourceY));
        
        printf("%d\n", matrix[disX][disY]);
    }
    
    return 0;
}