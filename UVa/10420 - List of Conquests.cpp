#include <bits/stdc++.h>
using namespace std;

map<string, int> country;

int main(){
    int t;
    scanf("%d", &t);

    while(t--){   
        string name, line;
        cin>>name; getline(cin, line);
        country[name]++;    
    }
    
    for(auto a : country) printf("%s %d\n", a.first.c_str(), a.second);
    
    return 0;
}