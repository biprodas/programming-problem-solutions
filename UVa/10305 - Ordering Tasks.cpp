#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define MX 105

queue<int> Q; //if ask for any order sorting
//priority_queue<int, vector<int>, greater<int> > PQ; //for lexicographically sorting
vector<int> graph[MX], T;
int inDegree[MX];
int N, M;

void clear(){
    for(int i=0;i<MX;i++) graph[i].clear();
    T.clear();
    memset(inDegree,0,sizeof(inDegree));
    while(!Q.empty()) Q.pop();
}

void topSort(){
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        T.pb(u);
        int sz = graph[u].size();
        for(int i=0; i<sz; i++){
            int v = graph[u][i];
            inDegree[v]--;
            if(inDegree[v]==0)
                Q.push(v);
        }
    }
}

int main(){

    while(scc(N,M)){
        if(N==0 && M==0) break;
        clear();
	int u, v;
        for(int i=0;i<M;i++){
            scc(u,v);
            graph[u].pb(v);
            inDegree[v]++;
        }
        for(int i=1;i<=N;i++){
            if(inDegree[i]==0){
                Q.push(i);
            }
        }

        topSort();

        int space=0;
        for(auto a: T){
            if(space) printf(" ");
            space=1;
            printf("%d",a);
        }
        printf("\n");
    }
    
    return 0;
}