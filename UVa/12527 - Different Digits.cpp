#include<bits/stdc++.h>
using namespace std;

bool isRepeated(int x){
    string s= to_string(x);
    bool ar[10]={0};
    for(int i=0;s[i];i++){
        if(ar[s[i]-'0']==true) return true;
        else ar[s[i]-'0']= true;
    }
    return false;
}

int main(){
    int n, m;
    while(cin>>n>>m){
        int cnt=0;
        for(int i=n;i<=m;i++){
            if(!isRepeated(i)) cnt++;
        }
        printf("%d\n",cnt);
    }
    
    return 0;
}
