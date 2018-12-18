#include <bits/stdc++.h>
using namespace std;
#define lng long long

int main(){
    //freopen("in.txt","r",stdin);
    lng t, sum, dif, a, b;
    cin>>t;
    while(t--){
        cin>>sum>>dif;
        if(sum<dif) {
            cout<<"impossible\n";
            continue;
        }
        a= (sum+dif)/2;
        b= sum-a;
        if(a+b==sum and a-b==dif)
            cout<<a<<" "<<b<<endl;
        else cout<<"impossible\n";
    }
    return 0;
}
