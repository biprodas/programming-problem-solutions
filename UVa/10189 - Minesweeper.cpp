#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int ar[103][103], n, m, x=0;

void print(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(ar[i][j]==-1) printf("*");
            else printf("%d",ar[i][j]);
        }
        printf("\n");
    }
}

int main(){
    while(scanf("%d %d", &n, &m) && n && m){
        memset(ar,0,sizeof(ar));
        char ch;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
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
        printf("Field #%d:\n", ++x);
        print();
    }
}
