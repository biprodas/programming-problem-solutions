#include<bits/stdc++.h>
using namespace std;

string sentences[105];

int main(){
    int k = 0;
    int longest = 0;
    while(getline(cin, sentences[k])){
        if(sentences[k].size() > longest){
            longest = sentences[k].size();
        }
        k++;
    }
    
    for(int i=0; i<longest; i++){
        for(int j=k-1; j>=0; j--){
            (sentences[j].size() > i) ? cout<<sentences[j][i] : cout << ' ';
        }
        cout<<endl;
    }

    return 0;
}