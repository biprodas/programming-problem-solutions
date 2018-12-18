#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x;
    printf("Lumberjacks:\n");
    cin>>t;
    while(t--){
        int mx=-1, mn=101;
        bool up=true, down=true;
        for(int i=0;i<10;i++){
            cin>>x;
            x>mx ? mx=x : up=false;
            x<mn ? mn=x : down=false;
        }
        (up || down) ? printf("Ordered\n") : printf("Unordered\n");
    }
    
    return 0;
}
