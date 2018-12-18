#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned long long

int main(){
    int terget;
    cin>>terget;
    int n=3;
    int p=terget/n;
    cout<<p<<"\n"<<(p+1)/2<<endl;
    i64 s=0;
    if(p%2==0)
        s = (n*(p/2)*(p+1));
    else
        s = (i64)(n*p*(p+1)/2);

    cout<<s;

    return 0;
}
