//https://www.hackerrank.com/contests/projecteuler/challenges/euler001
#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned long long

i64 sumDivBy(i64 t, i64 n){
    i64 p= t/n;
    return n*p*(p+1)/2;
}
int main(){
    //freopen("in.txt","r",stdin);
    i64 test, terget, sum=0;
    cin>>test;
    while(test--){
        cin>>terget;
        sum = (sumDivBy(terget-1,3)-sumDivBy(terget-1,15))+sumDivBy(terget-1,5);
        cout<<sum<<endl;;
    }
    return 0;
}
