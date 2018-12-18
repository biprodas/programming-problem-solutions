#include <bits/stdc++.h>
using namespace std;

char mp(char c){
    if(c == '0' || c == '1' || c == '-') return c;
    if(c <= 'C') return '2';
    if(c <= 'F') return '3';
    if(c <= 'I') return '4';
    if(c <= 'L') return '5';
    if(c <= 'O') return '6';
    if(c <= 'S') return '7';
    if(c <= 'V') return '8';
    return '9';
}

int main(){
    string str;
    
    while(getline(cin, str)){
        for(auto c : str) printf("%c", mp(c));
        printf("\n");
    }
    
    return 0;
}