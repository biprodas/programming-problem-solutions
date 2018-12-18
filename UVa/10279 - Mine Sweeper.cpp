#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int ar[15][15], t, n, x=0;


void print(){
    char ch[n+1][n+1], c;
    bool touchedAsterisk = false;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c;
            ch[i][j] = c;
            if(c=='x' && ar[i][j]==-1) 
                touchedAsterisk = true;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(ch[i][j] == 'x'){ // * guli array te -1 hoye ace
                if(ar[i][j]==-1) printf("*");
                else cout<<ar[i][j];
            }
            else{
                if(touchedAsterisk && ar[i][j]==-1) printf("*");
                else printf(".");
            }
        }
        printf("\n");
    }
}

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        memset(ar,0,sizeof(ar));
        char ch;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>ch;
                if(ch=='*'){
                    ar[i][j]=-1;
                    for(int k=0;k<8;k++){
                        if(ar[i+dx[k]][j+dy[k]] != -1) ar[i+dx[k]][j+dy[k]]++;
                    }
                }
            }
        }
        if(x!=0) printf("\n");
        x=1;
        print();
    }
}
