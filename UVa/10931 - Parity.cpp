#include <bits/stdc++.h>
using namespace std;
#define pair<string, int> pis

string toBinary(int n){
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(){
    int n;
    while(scanf("%d",&n)==1 && n){
        string bin = toBinary(n);
        int p=0, len=bin.length();
        for(int i=0;i<len;i++) if(bin[i]=='1') p++;
        cout<<"The parity of "<<bin<<" is "<<p<<" (mod 2).\n";
    }
    return 0;
}
