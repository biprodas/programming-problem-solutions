#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    lng s, d;
    while(cin>>s>>d){
        lng sum = s;
        while(sum<d){
            sum += ++s;
        }
        cout<<s<<endl;
    }
    return 0;
}