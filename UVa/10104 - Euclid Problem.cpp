#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int gcd, x, y;
void egcd(int A, int B) {
    if(B == 0) {
        gcd = A;
        x = 1;
        y = 0;
    }
    else {
        egcd(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main() {
	int a, b;
	while(scc(a,b)==2){
	    egcd(a,b);
	    printf("%d %d %d\n", x, y, gcd);
	}
	return 0;
}