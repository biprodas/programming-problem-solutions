//#include<iostream>
#include<bits/stdc++.h>

using namespace std;
char a[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};

char func(char c){
    for(int i=0; i<strlen(a); i++){
        if(a[i]==c) return a[i-1];
    }
    return c;

}

int main(){
    char s[10001];
    while(gets(s)){
        for(int i=0; i<strlen(s); i++){
            s[i] = func(s[i]);
        }
        puts(s);
    }
return 0;
}
