#include <bits/stdc++.h>
using namespace std;
#define lng long long

int main(){
    int t;
    lng sumSquare, squareSum;
    cin >> t;
    while(t--){
        lng x, ans=0;
        cin>>x;
        squareSum= (x*(x+1))/2;
        sumSquare= (x*(x+1)*(2*x+1))/6;
        ans= (squareSum*squareSum)-sumSquare;
        cout<<ans<<endl;
    }
    return 0;
}

//Problem-Link: https://www.hackerrank.com/contests/projecteuler/challenges/euler006
