#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    string str;
    while(getline(cin, str)){
        int cnt = 0;
        for(int i=0;str[i];i++){
            if(isalpha(str[i])){
                cnt++;
                while(isalpha(str[++i]));
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}