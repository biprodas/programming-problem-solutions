#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int self[1000006];

void pre(){
    for(int i=1;i<=1000000;i++){
        int total = i, n=i;
        while(n>0){
            total += n%10;
            n /= 10;
        }
        self[total] = true;;
    }
}

int main(){
    pre();
    for(int i=1;i<=1000000;i++){
        if(!self[i]) printf("%d\n", i);
    }
    return 0;
}