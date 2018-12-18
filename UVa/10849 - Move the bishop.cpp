#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, t, n, x1, y1, x2, y2, ans;
    cin>>c;
    while(c--){
        cin>>t>>n;
        while(t--){
            cin>>x1>>y1>>x2>>y2;
            if(((x1+y1)%2) != ((x2+y2)%2) || !x1>n || x2>n || y1>n || y2>n || x1<1 || x2<1 || y1<1 || y2<1) 
                printf("no move\n");
            else if(x1==x2 && y1==y2) printf("0\n");
            else if(abs(x1-x2)==abs(y1-y2)) printf("1\n");
            else printf("2\n");
        }
    }
    
}
