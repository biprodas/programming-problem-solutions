#include <bits/stdc++.h>
using namespace std;

int mod(string s, int m){
    int n=0, len = s.length();
    for(int i=0; i<len; i++){
        n = ((n * 10) + (s[i]-'0')) % m;
    }
    return n;
}
            
bool isLeapYear(string n){
    return ((mod(n, 4)==0 && mod(n, 100)!=0) || mod(n, 400)==0) ? 1 : 0;  
}
bool isHuluculu(string n){
    return mod(n,15)==0 ? 1 : 0;  
}
bool isBulukulu(string n){
     return (isLeapYear(n) && mod(n, 55)==0)  ? 1 : 0;  
}
bool isOrdinary(string n){
    return (isLeapYear(n) || isHuluculu(n) || isBulukulu(n)) ? 0 : 1;
}

int main() {
    string n;
    bool b=false;
    while(cin>>n){
        if(b) printf("\n"); 
        b= true;
        if(isLeapYear(n)) printf("This is leap year.\n");
        if(isHuluculu(n)) printf("This is huluculu festival year.\n");
        if(isBulukulu(n)) printf("This is bulukulu festival year.\n");
        if(isOrdinary(n)) printf("This is an ordinary year.\n");
    }
    return 0;
}
