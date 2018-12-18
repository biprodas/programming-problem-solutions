#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, l, w, h;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        printf("Case %d: ", cs);
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20) printf("good\n");
        else printf("bad\n");
    }
}

