#include<bits/stdc++.h>
using namespace std;

vector<string> dictionary;
bool vis[203];

struct Node {
    string str;
    int cost;
    Node(){}
    Node(string s, int c) {
        str = s;
        cost = c;
    }
};

bool isOneCharDiff(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    int cnt = 0;
    for(int i=0; s1[i]; i++ )  
        if(s1[i] != s2[i]) cnt++;
    return cnt==1;
}

int bfs(string s1, string s2){
    queue<Node> Q;
    Q.push(Node(s1, 0));
    memset(vis,false, sizeof(vis));
    while(!Q.empty()) {
        Node p = Q.front(); 
        Q.pop();
        if(p.str == s2) return p.cost;
        int sz = dictionary.size();
        for(int i=0; i<sz; i++){
            if(!vis[i]) {
                if(isOneCharDiff(p.str, dictionary[i])){
                    Q.push(Node(dictionary[i], p.cost + 1));
                    vis[i] = true;
                }
            }
        }
    }
    return 0;
}

int main(){
    int t, blank=0;
    cin>>t;

    while(t--){
        if(blank) printf("\n"); blank=1;
        dictionary.clear();
        string s, s1, s2;
        while(cin>>s && s!="*"){
            //cout<<s<<endl;
            dictionary.push_back(s);
        }
        cin.ignore();
        while(getline(cin, s) && s!=""){
            stringstream ss(s);
            ss >> s1 >> s2;
            printf("%s %s %d\n",s1.c_str(), s2.c_str(), bfs(s1, s2));
        }
    }
}