#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 103

int graph[MX][MX];

int reset(){
    for(int i=0;i<MX;i++){
        for(int j=0;j<MX;j++)
            graph[i][j] = inf;
    }
}

void floyd_warshal(int n){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                graph[i][j]= min(graph[i][j], graph[i][k]+graph[k][j]);
            }
        }
    }
}

int main(){
    int n=0, a, b, cs=0;
    while(scc(a,b) && a && b){
        reset();

        n = max(n, max(a,b));
        graph[a][b]=1;
        
        while(scc(a,b) && a && b){
            n = max(n, max(a,b));
            graph[a][b]=1;
        }
        
        floyd_warshal(n);
        
        int res=0, pairs=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i!=j && graph[i][j]!=inf){
                    res += graph[i][j];
                    pairs++;
                }
            }
        }

        printf("Case %d: average length between pages = %.3f clicks\n", ++cs, 1.0 * res / pairs);
    }
    return 0;
}