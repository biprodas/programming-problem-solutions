#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, blank=0;
    map<string, int> treeFreq;

    scanf("%d\n\n", &t);
    
    while(t--){
        int total=0;
        string line;
        treeFreq.clear();

        while(getline(cin, line) && line != ""){
            treeFreq[line]++;
            total++;
        }
        
        if(blank) printf("\n");
        blank = 1;
        for(auto a: treeFreq){
            printf("%s %.4f\n", a.first.c_str(), a.second * 100.0 / total);
        }
    }
    
    return 0;
}