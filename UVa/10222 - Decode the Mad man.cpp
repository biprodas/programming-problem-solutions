#include <bits/stdc++.h>
using namespace std;

char keyboard[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', 92,
                'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 39,
                'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

int main(){
    string s;
    while(getline(cin, s)){
        for(int i=0; s[i]; i++){
            tolower(s[i]);
            if(s[i] == ' ') cout<<s[i] ;
            else{
                for(int j=0; j<34; j++){
                    if(s[i] == keyboard[j]) {
                        cout<<keyboard[j-2] ;
                        break ;
                    }
                }
            }
        }
        cout<<endl;
    }
}