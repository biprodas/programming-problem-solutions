#include <bits/stdc++.h>
using namespace std;

int ar[26];

int main(){
    int t;
    string str;
    scanf("%d\n", &t);
    while(t--){
        getline(cin, str);
        memset(ar,0,sizeof(ar));
        int mx=0;
        for(int i=0;str[i];i++){
            if(!isalpha(str[i])) continue;
            int idx = tolower(str[i])-'a';
            ar[idx]++;
            if(ar[idx] > mx) 
                mx = ar[idx];
        }
        //cout<<mx<<endl;;
        for(int i=0;i<26;i++) {
            if(ar[i]==mx) printf("%c", i+'a');
        }
        cout<<endl;
    }
}