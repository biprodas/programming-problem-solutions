//Modular arithmetic
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<cmath>
#define MAX 10001
using namespace std;

long long int modeEleven(char *number,long long int div){
     long long int len=0,r=0;
     len=strlen(number);
     for(int i=0;i<len;i++){
        r=r*10 + (number[i]-'0');
        r%=div;
     }
     return r;
}
int main(){
     char s[MAX];
     long long int d=11,remainder, len, i;
     //freopen("103.txt","r",stdin);
     while(scanf("%s",&s)==1){
            len=0;
        if(strcasecmp(s,"0")==0) break;
        remainder = modeEleven(s,d);
        cout<<s;
        if(remainder==0)
            cout<<" is a multiple of 11.\n";
        else
            cout<<" is not a multiple of 11.\n";
     }
     return 0;
}
