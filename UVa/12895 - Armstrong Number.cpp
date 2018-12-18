#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ( "in.txt", "r", stdin );
    int t,n,m,l,i,sum;
    char arr[11];
    cin>>t;
    while(t--){
        cin>>arr;
        l=strlen(arr);
        m=atoi(arr);
        n=m;
         i=l,sum=0;
        while(l>0){
            sum+=pow(n%10,i);
            n=n/10;
            l--;
        }
        (sum==m) ? cout<<"Armstrong\n":cout<<"Not Armstrong\n";
    }
return 0;
}
