#include<bits/stdc++.h>
using namespace std;

bool hasDivisor(int N){
    int s=sqrt(N);
    for(int i=111;i<=s;i++){
        if(N%i==0 && N/i<=999) return true;
    }
    return false;
}
bool isPalindrome(int n){
    int digit, rev=0, num= n;
     do{
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
     }while (num!=0);
     
     return n==rev;
}

int main(){
    int n= 998001; //999*999 = 998001
    for(int i=n; i>=12321;i--){ //111*111 = 12321
        if(isPalindrome(i) && hasDivisor(i)) return cout<<i,0;
    }
}