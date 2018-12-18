#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        if(str=="") { printf("\n"); continue; }
        int rep = 0;
        for(int i=0;str[i];i++){
            char ch = str[i];
            if(isdigit(ch)) rep += (ch - '0');
            else if(isalpha(ch)){
                while(rep--){
                    ch=='b' ? printf(" ") : printf("%c", ch);
                } 
                rep=0;
            }
            else if(ch=='*'){
                while(rep--) printf("*");
                rep=0;
            }
            else if(ch=='!') printf("\n");
        }
        printf("\n");
    }
    return 0;
}