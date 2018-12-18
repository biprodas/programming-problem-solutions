#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pii pair<int, int>
#define pb push_back
#define MX 10004

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};
string grid[MX];
map<char,int> rankMap;
vector<char> states;
int N, M;

void clear(){
    rankMap.clear();
    states.clear();
}
bool valid(int x, int y){
    if(x<0 || x>=N || y<0 || y>=M) return false;
    return true;
}

void dfs(int x, int y, char ch){
    if(!valid(x,y) || grid[x][y]!=ch) return;
    grid[x][y] = '*';
    for(int k=0;k<4;k++){
        dfs(x+dx[k], y+dy[k], ch);
    }
}

bool cmp(char a, char b){
    if(rankMap[a]==rankMap[b])
        return a<b;
    else
        return rankMap[a]>rankMap[b];
}

int main(){
    int t, cs=0;
    sc(t);
    while(t--){
        clear();
        scanf("%d %d\n",&N,&M);
        for(int i=0;i<N;i++){
            getline(cin,grid[i]);
            //cout<<grid[i]<<endl;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                char ch = grid[i][j];
                if(ch!='*'){
                    dfs(i,j, ch);
                    if(!rankMap[ch]) states.pb(ch);
                    rankMap[ch]++;
                }
            }
        }
        sort(states.begin(), states.end(), cmp);
        
        printf("World #%d\n",++cs);
        for(auto a: states){
            printf("%c: %d\n", a, rankMap[a]);
        }
    }
    return 0;
}