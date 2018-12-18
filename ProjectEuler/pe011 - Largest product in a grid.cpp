#include<bits/stdc++.h>
using namespace std;
int grid[25][25];

int fn(int a, int b){
    int p1=1, p2=1, p3=1,p4=1, mx= -1;
    for(int i=0;i<4;i++){
        p1*= grid[a][b+i];
        p2*= grid[a+i][b+i];
        p3*= grid[a+i][b];
        p4*= grid[a+i][b+3-i];
    }
    return mx= max(max(p1,p4), max(p2,p3));
}

int main(){
    //freopen("in.txt","r",stdin);
    for(int i=1;i<=20;i++){
        for(int j=1;j<=20;j++)
          cin>>grid[i][j];
    }
    int mx= -1;
    for(int i=1;i<=17;i++){
        for(int j=1;j<=17;j++){
          mx= max(mx, fn(i, j));
        }
    }
    cout<<mx;
}
