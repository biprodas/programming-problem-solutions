#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2, ans;
    while(cin>>x1>>y1>>x2>>y2){
        if(!x1 && !y1 && !x2 && !y2) break;
        
        if(x1==x2 && y1==y2) ans = 0;
        else if(x1==x2 || y1==y2 || abs(x1-x2)==abs(y1-y2)) ans=1;
        else ans = 2;
        
        cout<<ans<<endl;
    }
}
