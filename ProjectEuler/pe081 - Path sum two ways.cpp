#include <bits/stdc++.h>
using namespace std;

int  grid[83][83];
int n=80;

int main() {
    freopen("in.txt","r",stdin);
    for(int i=0;i<=n;i++){
        grid[0][i] = INT_MAX;
        grid[i][0] = INT_MAX;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            scanf("%d, ",&grid[i][j]);
            if(i==1 and j==1) continue;
            grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
        }
    }

    cout<<grid[n][n]<<endl;
    return 0;
}

/* Answer : 427337 */