#include <bits/stdc++.h>
using namespace std;

int next(int n) {
    int sum = 0;
    while(n != 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}
bool call(int n){
    if(n==89) return true;
    if(n==1) return false;
    int m= next(n);
    return call(m);
}

int main(){
    int cnt=0;
    for(int i=1;i<10000000;i++){
        if(call(i)) cnt++;
    }
    cout<<cnt;
}

/* Answer : 8581146 */
