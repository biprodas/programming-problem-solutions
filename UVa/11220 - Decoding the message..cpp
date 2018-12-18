#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, cs=0, blank=0;
    scanf("%d\n", &t);
    while(t--){
        if(blank) puts(""); blank=1;
        printf("Case #%d:\n", ++cs);
        string str, s;
        while(getline(cin,str) && str != ""){
            //cout<<str<<endl;
            stringstream ss(str);
            string s, res = "";
            int i=0;
            while(ss >> s){
                //cout<<s<<" "<<i<<endl;
                if(s.size()>i) res += s[i++];
                //i++;
            }
            printf("%s\n", res.c_str());
        }
    }
}