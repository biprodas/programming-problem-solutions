#include <bits/stdc++.h>
using namespace std;

map<string, int> hayPoint;
int m, n, dollar, total;
string word;

int main(){
    cin>>m>>n;
    while(m--){
        cin>>word>>dollar;
        hayPoint[word] = dollar;
    }
    while(n--){
        total = 0;
        while(cin>>word && word!="."){
            total += hayPoint[word];
        }
        cout<<total<<endl;
    }
    return 0;
}