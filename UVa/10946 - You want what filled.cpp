#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define pci pair<char, int>
#define pb push_back
#define MX 55

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

string grid[MX];
vector<pci> hole;
int N, M;

bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=M) return false;
    return true;
}

int dfs(int x, int y, char ch){
    if(!valid(x,y) || grid[x][y]!=ch) return 0;
    grid[x][y] = '.';
    int ret=0;
    for(int k=0;k<4;k++){
        ret += dfs(x+dx[k], y+dy[k], ch);
    }
    return ret+1;
}

bool cmp(pci a, pci b){
    if(a.second==b.second)
        return a<b;
    else
        return a.second>b.second;
}

int main(){
    int cs=0;
    while(scanf("%d %d\n",&N,&M) && N && M){
        hole.clear();
        for(int i=0;i<N;i++){
            getline(cin,grid[i]);
            //cout<<grid[i]<<endl;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                char ch = grid[i][j];
                if(ch!='.'){
                    int rank = dfs(i,j, ch);
                    hole.pb({ch,rank});
                }
            }
        }
        sort(hole.begin(), hole.end(), cmp);
        
        printf("Problem %d:\n",++cs);
        for(auto a: hole){
            printf("%c %d\n", a.first, a.second);
        }
    }
    return 0;
}