#include<bits/stdc++.h>
using namespace std;
 
bool isPalindrome(int xx){
    int rr = 0, tt = xx;
    while(xx){
        rr = rr * 10 + xx % 10;
        xx /= 10;
    }
    return rr == tt;
}
 
int main(){
    //freopen("in.txt","r",stdin);
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++){
        printf("Case %d: ", cs);
        int x;
        scanf("%d",&x);
        isPalindrome(x) ? printf("Yes\n"):printf("No\n");
    }
 
    return 0;
}