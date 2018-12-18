#include<bits/stdc++.h>
using namespace std;
#define lng long long
lng newNum;

bool isPalindrome(lng num){
    lng r = 0, n = num;
    while(num){
        r = r * 10 + num % 10;
        num /= 10;
    }
    return r == n;
}
lng rev(lng n){
    lng r= 0, quo, rem;
    quo = n;
    while(quo!=0){
        rem= quo % 10;
        r= r * 10 + rem;
        quo /= 10;
    }
    return r;
}
int op(lng n){
    if(isPalindrome(n)) return 0;
    newNum= n+rev(n);
    return 1+op(newNum);
}

int main(){
    //freopen("in.txt","r",stdin);
    int t, x, res;
    cin>>t;
    while(t--){
        scanf("%d",&x);
        res= op(x);
        cout<<res<<" "<<newNum<<endl;
    }
    return 0;
}
