#include <bits/stdc++.h>
using namespace std;

int created[12], required[12];


int main(){
    int n, cs=0;
    
    while(cin>>n && n>=0) {
        printf("Case %d:\n", ++cs);
        for(int i=0; i<12; i++) cin>>created[i];
        for(int i=0; i<12; i++) cin>>required[i];

        for(int i=0; i<12; i++) {
            if (n<required[i]) printf("No problem. :(\n");
            else {
                printf("No problem! :D\n");
                n -= required[i];
            }
            n += created[i];
        }
    }
    
    return 0;
}
