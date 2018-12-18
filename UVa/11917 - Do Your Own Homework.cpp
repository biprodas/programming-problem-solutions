#include <bits/stdc++.h>
using namespace std;

int main (){
    int t, cs=0, n, days, d;
    string subject, assignment, reply;
    
    cin>>t;
    while(t--){
        map<string, int> subjectMap;

        cin>>n;
        while(n--){
            cin>>subject>>days;
            subjectMap[subject] = days;
        }
        
        cin>>d>>assignment;
        
        bool hm = subjectMap.find(assignment) != subjectMap.end();

        if(hm && subjectMap[assignment]<=d) reply = "Yesss";
        else if(hm && subjectMap[assignment]<=d+5) reply = "Late";
        else reply = "Do your own homework!";
        
        printf ("Case %d: %s\n", ++cs, reply.c_str());
    }
 
    return 0;
}