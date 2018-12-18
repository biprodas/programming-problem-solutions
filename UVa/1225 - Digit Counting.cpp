#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        for(int i=1;i<=n;i++){
            s+= to_string(i);
        }
        int ar[10]={0};
        for(int i=0;s[i];i++){
            ar[s[i]-'0']++;
        }
        bool b=true;
        for(int i=0;i<10;i++){
            if(b) {printf("%d",ar[i]); b=false;}
            else printf(" %d",ar[i]);
        }
            
        cout<<endl;
    }

}
