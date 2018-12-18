#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long
#define MX 4294967295
map<int,int> mp;

lng catalan[20];
lng catalanDP(int n){
    if(n <= 1){
        mp[1] = 1;
        return catalan[n] = 1;
    }
    if(catalan[n]!=-1) return catalan[n];
    lng res = 0;
    for(lng i=0; i<n; i++){
        res += catalanDP(i)*catalanDP(n-i-1);
    }
    mp[res] = n;
    return catalan[n]= res;
}

int main(){
    memset(catalan,-1,sizeof(catalan));
    catalanDP(19);
    int n;
    while(cin>>n){
        cout<<mp[n]<<endl;
    }
    return 0;
}