#include <bits/stdc++.h>
using namespace std;

int ar[26];
 
int main() {
    int x, cs=0, r, c, m, n;
    cin>>x;
    
    while(x--){
        scanf("%d %d %d %d\n", &r, &c, &m, &n);
        memset(ar, 0, sizeof(ar));
        string s;
        
        for(int i=0; i<r; i++){
            cin>>s;
            for(int j=0; j<c; j++) ar[s[j]-'A']++;
        }

        int mx=0, cnt=0;
        for(int i=0; i<26; i++){
            if(mx<ar[i]){
                mx = ar[i];
                cnt=0;
            }
            if(mx==ar[i]) cnt++;
        }
        
        int important = mx * cnt;
        int fileSize = important * m + (r * c - important) * n;
        
        printf("Case %d: %d\n", ++cs, fileSize);
    }
    
    return 0;
}