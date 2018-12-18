#include <bits/stdc++.h>
using namespace std;

struct Date {
    string name;
    int day;
    int month;
    int year;
    Date(string n, int d, int m, int y){
        name  = n;
        day   = d;
        month = m;
        year  = y;
    }

    bool operator < (const Date& d) const {
        if(year>d.year) return true;
        if(year==d.year && month>d.month) return true;
        if(year==d.year && month==d.month && day>d.day) return true;
        else return false;
    }
};

int main(){
    int n;
    cin>>n;
    vector<Date> v;
    
    while(n--){
        string name;
        int d, m, y;
        cin >> name >>d >> m >> y;
        v.push_back(Date(name, d, m, y));
    }
    
    sort(v.begin(), v.end());
    
    printf("%s\n%s\n", (v.front().name).c_str(), (v.back().name).c_str());
    
    return 0;
}