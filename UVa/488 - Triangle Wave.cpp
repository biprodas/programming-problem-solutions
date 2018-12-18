#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)


int main(){
    int t, A, F, blank=0;
    sc(t);
    while(t--){
        scc(A,F);
        if(blank) printf("\n");
        blank=1;
        for(int f=0; f<F; f++){
            for(int i=1; i<=A; i++){
                for(int j=1; j<=i; j++){
                    printf("%d",i);
                }
                printf("\n");
            }
            for(int i=A-1;i>=1;i--){
                for(int j=1;j<=i;j++){
                    printf("%d",i);
                }
                printf("\n");
            }
            if(f<F-1) printf("\n");
        }
    }
}
