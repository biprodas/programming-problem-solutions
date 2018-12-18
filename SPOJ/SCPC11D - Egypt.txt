#include<bits/stdc++.h>
using namespace std;
int b[3];

int main(){

    while(cin>>b[0]>>b[1]>>b[2]){
        if(b[0]==0 && b[1]==0 && b[1]==0)
            break;
        sort(b,b+3);
        int x = b[0]*b[0];
        int y = b[1]*b[1];
        int z = b[2]*b[2];
        
        if((z==x+y) && b[2]<=b[1]+b[0])
            printf("right\n");
        else
            printf("wrong\n");
    }
 
    return 0;
}
 