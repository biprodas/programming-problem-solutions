#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    char n;
    string d;
    while(cin>>n>>d){
        if(n=='0' && d=="0") break;
        string ans="";
        bool sunno=false;
        for(int i=0;d[i];i++){
            if(d[i]!=n){
                if(d[i]!='0') sunno=true;
                if(sunno) ans += d[i];
            }
        }
        if(ans=="") ans = "0";
        printf("%s\n",ans.c_str());
    }
}