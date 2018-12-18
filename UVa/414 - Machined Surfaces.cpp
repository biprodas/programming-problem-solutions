#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    
    while(scanf("%d\n",&n) && n){
        int total=0, mx=0, cnt=0;

        for(int i=0;i<n;i++){
            getline(cin,s);
            //cout<<s<<endl;
            cnt=0;
            for(int k=0;k<25;k++) {
                if(s[k]=='X') cnt++;
            }
            mx = max(mx, cnt);
            total += cnt;
        }
        
        int ans = mx * n - total;
        
        printf("%d\n",ans);
    }
    return 0;
}

