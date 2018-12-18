#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, cs=0;
    while(cin>>n){
        if(n==0) break;
        int give=0, given=0;
        while(n--) {
            cin>>x;
            if(x==0) given++;
            else give++;
        }
        printf("Case %d: %d\n", ++cs, give-given);
    }
}

