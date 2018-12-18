#include <bits/stdc++.h>
using namespace std;

string code = "OIZEASGTBP";

int main(){
    int t, blank=0;
    scanf("%d\n", &t);
    while(t--){
        if(blank) puts(""); blank=1;
        string str, res;
        while(getline(cin,str) && str != ""){
            res = "";
            for(int i=0;str[i];i++){
                res += isdigit(str[i]) ? code[str[i]-'0'] : str[i];
            }
            printf("%s\n", res.c_str());
        }
    }
}