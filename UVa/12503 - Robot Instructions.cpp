#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, i, pos=0;
        string instruction;
        vector<int> actions;
        
        cin>>n;
        while(n--){
            cin>>instruction;
            if(instruction=="LEFT"){
                pos--;
                actions.pb(-1);
            }
            else if(instruction=="RIGHT"){
                pos++;
                actions.pb(1);
            }
            else{
                cin>>instruction>>i;
                pos += actions[i-1];
                actions.pb(actions[i-1]);
            }
        }
        cout<<pos<<endl;
    }

    return 0;
}
