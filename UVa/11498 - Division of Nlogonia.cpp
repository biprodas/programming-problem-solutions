#include<bits/stdc++.h>
using namespace std;

int main(){
    int q, x, y, x1, y1;
    string s;
    while(cin>>q){
        if(q==0) break;
        cin>>x>>y;
        while(q--){
            cin>>x1>>y1;
            x1-=x, y1-=y;
            if(x1==0 || y1==0) s="divisa";
            else if(x1>0){
                s= (y1>0)? "NE" : "SE"; 
            }
            else if(x1<0){
                s= (y1>0)? "NO" : "SO"; 
            }
            cout<<s<<endl;
        }
    }
    
    return 0;
}