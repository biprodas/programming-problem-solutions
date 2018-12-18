#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)

int numOfSetBits(int n){
    int cnt = 0;
    while(n){
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}

int main(){
    int t, n, m;
    sc(t);
    while(t--){
        sc(n);
        int b1 = numOfSetBits(n);
        int b2 = 0;
        while(n){
            b2 += numOfSetBits(n % 10);
            n /= 10;
        }
        printf("%d %d\n", b1, b2);
    }
}