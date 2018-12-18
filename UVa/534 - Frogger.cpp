#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scc(x, y) scanf("%d %d",&x, &y)
#define sccc(x, y, z) scanf("%d %d %d",&x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define inf 1e9
#define MX 203

float graph[MX][MX];
vector<pii> pos;

void floyd_warshal(int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j]= min(graph[i][j], max(graph[i][k], graph[k][j]));
            }
        }
    }
}

int main(){
    int n, cs=0;
    while(sc(n) && n){
        memset(graph,63,sizeof(graph));
        pos.clear();
        int x, y;
        for(int i=0; i<n; i++){
            scc(x,y);
            pos.pb({x, y});
        }
        for(int i=0; i<n; i++){
            for(int j=0;j<n;j++){
                if(i!=j) graph[i][j] = sqrt(pow(pos[i].first - pos[j].first, 2) + pow(pos[i].second - pos[j].second, 2));
            }
        }
        
        floyd_warshal(n);
        
        printf("Scenario #%d\nFrog Distance = %.3f\n\n", ++cs, graph[0][1]);
    }
    return 0;
}