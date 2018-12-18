#include <bits/stdc++.h>
using namespace std;

string mapping = "22233344455566677778889991";
string directory[100005];

void clearDirectory(){
    for(int i=0; i<100005; i++) {
        directory[i].clear();
    }
}

string format(string s){
    string ret="";
    for(int i=0; s[i]; i++ ) {
        if(isdigit(s[i])) ret += s[i];
        else if(isalpha(s[i])) ret += mapping[(int)(s[i]-'A')];
    }
    ret.insert (3, "-");
    return ret;
}
 
int main(){
    int t, n, blank=0;
    cin>>t;
    
    while(t--){
        scanf("%d\n", &n);
        clearDirectory();
        map<string, int> freq;
        int size=0;
        while(n--) {
            string num;
            getline(cin, num);
            string formated = format(num);
            //cout<<formated<<endl;
            freq[formated]++;
            if(freq[formated]==2) directory[size++] = formated;
        }
 
        sort(directory, directory+size);
 
        if(blank) cout<<endl;
        blank = true;
 
        bool printed = false;
 
        for(int i=0; i<size; i++) {
            cout<<directory[i]<<" "<<freq[directory[i]]<<endl;
            printed = true;
        }
 
        if(!printed) cout<<"No duplicates."<<endl;
    }
 
    return 0;
}
