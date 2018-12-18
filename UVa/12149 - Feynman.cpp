#include <bits/stdc++.h>
using namespace std;

int ar[101];
int pre(){
    ar[0]=0;
    for(int i=1;i<=100;i++){
        ar[i] = i*i + ar[i-1];
    }
}

int main(){
    pre();
    int n;
    while(scanf("%d",&n) && n){
        printf("%d\n", ar[n]);
    }
    return 0;
}
