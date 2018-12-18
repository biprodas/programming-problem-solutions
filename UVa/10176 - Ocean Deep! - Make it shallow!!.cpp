#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    char ch;
    while(cin>>ch){
        int n = ch-'0';
        while(cin>>ch){
            if(ch=='#') break;
            n = n*2 + (ch-'0');
            n %= 131071;
        }
        n ? printf("NO\n") : printf("YES\n");
    }
}