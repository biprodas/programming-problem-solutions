#include <bits/stdc++.h>
using namespace std;

map<string, string> mp = {{"HELLO","ENGLISH"}, {"HOLA","SPANISH"}, {"HALLO","GERMAN"},
			  {"BONJOUR", "FRENCH"}, {"CIAO","ITALIAN"}, {"ZDRAVSTVUJTE","RUSSIAN"}};

int main(){
    int cs=0;
    string s;
    while(cin>>s){
        if(s=="#") break;
        printf("Case %d: ", ++cs);
        if(mp.find(s)!=mp.end()) cout<<mp[s]<<endl;
        else cout<<"UNKNOWN\n";
    }
}

