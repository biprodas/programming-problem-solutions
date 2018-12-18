#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    int n;
    while(sc(n)==1 && n>=0){
        if(n<=1) cout<<"0";
        else cout<<(25LL*n);
        cout<<"%"<<endl;;
    }
	return 0;
}