#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        string str, res="";
        getline(cin, str);
        int len = str.size();
        int sq = sqrt(len);
        if(sq*sq != len) res = "INVALID";
        else{
            for(int i=0;i<sq;i++){
                for(int j=i;j<len;j+=sq){
                    res += str[j];
                }
            }
        }
        printf("%s\n", res.c_str());
    }
}