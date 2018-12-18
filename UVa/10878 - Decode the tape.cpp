#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x,y) scanf("%d %d", &x, &y)
#define sccc(x,y,z) scanf("%d %d %d", &x, &y, &z)


int toDecimal(string ss){
    int p=0, len = ss.size();
    int n = ((ss[len-1]-48)*1);
    for(int j=(len-2); j>=0; j--){
        n += ((ss[j]-48)*(2<<p));
        p++;
    }
    return n;
}

int main(){
    string s;
    while(getline(cin, s)){
        if(s[0] == '_') continue;
        //cout<<s<<endl;
        string bin = "";
        for(int i=0; s[i]; i++){
            if(s[i]== ' ')
                bin += '0';
            else if(s[i]=='o')
                bin += '1';
        }
        int num = toDecimal(bin);
        printf("%c",(char)num);
    }
    
    return 0;
}