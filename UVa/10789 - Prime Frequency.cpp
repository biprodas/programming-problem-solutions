#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;

bool isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    }
    return true;
}

int main(){
    int t, cs=0;
    string str;
    scanf("%d\n", &t);
    while(t--){
        getline(cin, str);
        mp.clear();
        for(int i=0; str[i]; i++){
            mp[str[i]]++;
        }
        bool p = 0;
        printf("Case %d: ", ++cs);
        for(auto a : mp){
            if(isPrime(a.second)) printf("%c", a.first), p=1;
        }
        if(!p) printf("empty"); 
        printf("\n");
    }
    return 0;
}
