#include<bits/stdc++.h>
using namespace std;
#define inf 9999999

typedef struct{
    int u,v,w;
} Edge;

Edge edge[1001];
int dis[101];
int n, m, src;

void BellmanFord(int s){
    memset(dis,-inf,sizeof(dis));
    dis[s]= 0;
    for(int i=0; i<n-1; i++){ 
        for(int j=0; j<m; j++){ //for all edges
            if(dis[edge[j].v] < dis[edge[j].u]+edge[j].w)
                dis[edge[j].v] = dis[edge[j].u]+edge[j].w;
        }
    }
}

int main(){
    int cs=1, u, v;
    while(scanf("%d",&n)&&n){
        cin>>src;
        m=0;
        while(cin>>u>>v){
            if(u==0 && v==0) break;
            edge[m].u= u;
            edge[m].v= v;
            edge[m].w= 1;
            m++;
        }
        BellmanFord(src);
        //for(int i=0;i<=n;i++) cout<<dis[i]<<" ";
        int end=src, len=0;
        for(int i=1; i<=n; i++){
            if(dis[i]>len){
                len=dis[i];
                end=i;
            }
        }
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",cs++,src,len,end);
    }
    return 0;
}