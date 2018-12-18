#include <bits/stdc++.h>
using namespace std;

int countTriangles(int n) {
    int cnt = 0;
    for(int a=1; a<=n; a++) {
	for(int b=a; b<=n; b++) {
	    int c = n - (a + b);
	    if (b <= c && a*a + b*b == c*c)
	        cnt++;
	}
    }
    return cnt;
}
	
int main(){
    int mxNum= 0, mxTri = 0;
    for(int i=1; i<=1000; i++) {
	int tri = countTriangles(i);
	if (tri > mxTri) {
	    mxTri = tri;
	    mxNum = i;
	}
    }
    cout<<mxNum;
}

/* Answer : 840 */