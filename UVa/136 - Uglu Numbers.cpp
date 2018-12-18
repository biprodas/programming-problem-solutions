#include <bits/stdc++.h>
using namespace std;
#define MX 1503

int ugly[MX];

int min(int a, int b, int c){
    int m=a;
    if(b<m) m=b;
    if(c<m) m=c;
    return m;
}
int NthUgly(int n){
    ugly[1] = 1;
    int w = 1, x = 1, y = 1;

    for(int i=2; i<=MX; i++){
        ugly[i] = min(2*ugly[w], 3*ugly[x], 5*ugly[y]);
        if(ugly[i] == 2*ugly[w]) w++;
        if(ugly[i] == 3*ugly[x]) x++;
        if(ugly[i] == 5*ugly[y]) y++;
    }
    return ugly[n];
}

int main(){
    printf("The 1500'th ugly number is %d.\n", NthUgly(1500));
    return 0;
}
