#include <bits/stdc++.h>

using namespace std;

#define sc(n) scanf("%d",&n)


bool f[10001];

int main() {

    int n;

    while(sc(n)==1){

        int x, y, m=n;

        memset(f,0,sizeof(f));

        bool flag=1;

        sc(x); m--;

        while(m--){

            sc(y);

            f[abs(x-y)]= 1;

            x=y;

        }

        for(int i=1;i<n;i++) 
	    if(!f[i]) flag=0;

        flag ? printf("Jolly\n") : printf("Not jolly\n");

    }

}
