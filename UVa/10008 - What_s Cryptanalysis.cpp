#include <bits/stdc++.h>
using namespace std;

struct Node{
    char letter;
    int freq;
    Node(char c, int f){
        letter = c;
        freq = f;
    }
    bool operator < (Node P) const {
        if(freq == P.freq) return letter < P.letter;
        else return freq > P.freq;
    }
};



int main(){
    vector<Node> v;
    for(int i=0;i<26;i++){
        v.push_back(Node('A'+i, 0));
    }
    
    char ch; 
    while(scanf("%c", &ch) != EOF){
        if(!isalpha(ch)) continue;
        v[toupper(ch)-'A'].freq++;
    }
    
    sort(v.begin(), v.end());
    
    for(auto a : v){
        if(a.freq==0) break;
        printf("%c %d\n", a.letter, a.freq);
    }
    
    return 0;
}
