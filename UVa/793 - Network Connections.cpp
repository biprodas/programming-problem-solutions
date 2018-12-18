#include <bits/stdc++.h>
using namespace std;
#define MX 1000006

//dsu
int parent[MX];
void init(int n) { for(int i=0;i<=n+2;i++) parent[i]= i;}
int root(int r) { return parent[r] == r ? r : root(parent[r]); }
bool isConnect(int A, int B) { return root(A)==root(B); }
void connect(int A, int B) { parent[root(A)] = root(B); }

int main(){
    int t, blank=0;
    
    cin>>t;
    while(t--){
        int n, x, y, sucCnt=0, unsucCnt=0;
        string s;
        char ch;
        scanf("%d\n",&n);
        
        init(n);
        
        while(getline(cin, s) && !s.empty()){
            //cout<<s<<endl;
            sscanf(s.c_str(), "%c %d %d", &ch, &x, &y);
            if(ch=='c'){
                connect(x,y);
            }
            if(ch=='q'){
                isConnect(x, y) ? sucCnt++ : unsucCnt++;
            }
        }
        if(blank) printf("\n"); blank=1;
        printf("%d,%d\n", sucCnt, unsucCnt);
    }
    
    return 0;
}