#include <bits/stdc++.h>
using namespace std;

int ar[123];

int main(){
    string str;
    while(getline(cin,str)){
        memset(ar,0,sizeof(ar));
        int mx=0;
        for(int i=0;str[i];i++){
            if(!isalpha(str[i])) continue;
            ar[str[i]-'A']++;
            if(ar[str[i]-'A'] > mx) 
                mx = ar[str[i]-'A'];
        }
        for(int i=0;i<123;i++) {
            if(ar[i]==mx) printf("%c", i+'A');
        }
        printf(" %d\n", mx);
    }
    return 0;
}