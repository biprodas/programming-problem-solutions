#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

lng fact[14];
void preFacto(){
    fact[0]=1;
    for(int i=1;i<=13;i++){
        fact[i] = i*fact[i-1];
    }
}

int main(){
    int t, cs=0;
    string s;
    sc(t);
    while(t--){
        cin>>s;
        int freq[26] = {0};
        for(int i=0;i<s[i];i++){
            freq[s[i]-'A']++;
        }
        lng n = 1, x=1;
        for(int i=0;i<26;i++){
            for(int j=1;j<=freq[i];j++){
                n = n * x/j;
                x++;
            }
        }
        printf("Data set %d: %lld\n", ++cs, n);
    }

    return 0;
}