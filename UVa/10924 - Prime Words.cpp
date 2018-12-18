#include <bits/stdc++.h>
using namespace std;

vector<int> primeList;
int ans[10004]={0};

bool isPrime(int n) {
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    }
    return true;
}

bool isPrimeWord(string s){
    int n=0, len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z') n += s[i] - 'a' + 1;
        else n += s[i] - 'A' + 27;
    }
    return isPrime(n);
}

int main(){
    string s;
    while(cin>>s){
        isPrimeWord(s) ? cout<<"It is a prime word.\n" : cout<<"It is not a prime word.\n";
    }
    
    return 0;
}



