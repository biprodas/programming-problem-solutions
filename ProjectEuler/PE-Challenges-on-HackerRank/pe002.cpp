#include <bits/stdc++.h>
using namespace std;
#define lng long long

lng sum(lng n){
    lng a=1, b=1, c=2, sum=0;
    while(c<=n){
        sum+=c;
        a= b+c;
        b= a+c;
        c= a+b;
    }
    return sum;
}

int main(){
    lng t, x;
    cin>>t;
    while(t--){
        scanf("%lld",&x);
        printf("%lld\n",sum(x));
    }
}

Problem-Link: https://www.hackerrank.com/contests/projecteuler/challenges/euler002
