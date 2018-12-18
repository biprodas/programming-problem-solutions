#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char c[20];
    int t=1;
    while(gets(c)){
        if(strcmp(c, "*")==0) break;
        if(strcmp(c,"Hajj")==0)
            cout<<"Case "<<t++<<": Hajj-e-Akbar\n";
        if(strcmp(c,"Umrah")==0)
            cout<<"Case "<<t++<<": Hajj-e-Asghar\n";
    }

return 0;
}
