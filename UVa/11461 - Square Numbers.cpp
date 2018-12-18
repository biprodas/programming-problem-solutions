#include<bits/stdc++.h>
using namespace std;

int ar[100005];

bool isSquare(int n){
    int sq = sqrt(n);
    return sq*sq==n;
}
void pre(){
    for(int i=1;i<100005;i++){
        ar[i]=ar[i-1];
        if(isSquare(i)) ar[i]++;
    }
}

int main(){
    pre();
    int a, b;
    while(scanf("%d %d", &a, &b)){
        if(!a && !b) break;
        cout<<ar[b]-ar[a-1]<<endl;
    }
}
