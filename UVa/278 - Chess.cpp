#include <bits/stdc++.h>
using namespace std;

int main(){
    char p;
    int t, r, c, ans;;
    cin>>t;
    while (t--){
        cin>>p>>r>>c;
        
        if(p=='r') ans = min(r, c);
        if(p=='k') ans = ((r*c)+1)/2;
        if(p=='Q') ans = min(r, c);
        if(p=='K') ans = ((r+1)/2) * ((c+1)/2);

        cout<<ans<<endl;
    }
}
