#include <bits/stdc++.h>
using namespace std;
#define pis pair<int, string>
#define pb push_back

vector<int> first;
vector<string> second;
vector<pis> res;


int main(){
    int t, n1;
    string s, n2;
    cin>>t;
    cin.ignore();//getchar();
    
    while(t--){
        cin.ignore();
        first.clear();
        second.clear();
        res.clear();
        
        getline(cin, s);
        stringstream ss(s);
        while(ss>>n1) first.pb(n1);
        //cout<<s<<endl;
        getline(cin, s);
        stringstream sss(s);
        while(sss>>n2) second.pb(n2);
        //cout<<s<<endl;

        int mn = min(first.size(), second.size());
        for(int i=0;i<mn;i++){
            res.pb({first[i], second[i]});
        }
        sort(res.begin(), res.end());
        
        for(auto a: res) cout<<a.second<<endl;
        if(t>0) cout<<endl;
    }
    
    return 0;
}
