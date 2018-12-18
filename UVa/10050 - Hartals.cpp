#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, p, x;
    cin>>t;
    while(t--){
        cin>>n>>p;
        bool ar[n] = {0};
        while(p--){
            cin>>x;
            for(int i=x-1; i<n; i+=x){
                ar[i] = true;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(ar[i] && i%7!=5 && i%7!=6) cnt++;
        }
        cout<<cnt<<endl;
    }
}
