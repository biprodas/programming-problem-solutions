#include <bits/stdc++.h>
using namespace std;

int soundex[] = {0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2};

int main(){
    string s;
    while(cin>>s){
        int len = s.size(), pre = soundex[0];
        long long ans = soundex[(int)(s[0]-'A')];
        
        for(int i=1;i<len;i++){
            if(!soundex[(int)(s[i]-'A')] || soundex[(int)(s[i]-'A')]==soundex[(int)(s[i-1]-'A')]) continue;
            ans = ans * 10 + soundex[(int)(s[i]-'A')];
        }
        
        if(ans) cout<<ans;
        cout<<endl;
    }
}
