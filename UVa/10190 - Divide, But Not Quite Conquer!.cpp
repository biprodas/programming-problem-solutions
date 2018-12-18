#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int n, m;
    while(scc(n,m)==2){
        if(m<=1 || n < m){
            printf("Boring!\n");
            continue;
        }
        int ar[10004] = {n};
        bool boring = false;
        int k=1;
        while(ar[k-1]!=1){
            if(ar[k-1]%m != 0){
                boring = true;
                break;
            }
            ar[k] = ar[k-1]/m;
            k++;
        }
        if(boring) printf("Boring!");
        else{
            printf("%d", ar[0]);
            for(int i=1;i<k;i++)
                printf(" %d", ar[i]);
        }
        printf("\n");
    }
    return 0;
}