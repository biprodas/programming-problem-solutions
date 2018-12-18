#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

void split_string(const string &s, vector<int> &v){
    istringstream in(s);
    v.clear();
    copy(istream_iterator<int>(in), istream_iterator<int>(), back_inserter(v));
}

/*  Example: 2x^3 – 6x^2 + 2x – 1
    The polynomial can be evaluated as: ((2x – 6)x + 2)x – 1 */
vector<int> poly;
int Horner(int x){
    int res = poly[0], sz = poly.size();
    for(int i=1; i<sz; i++){
        res = res*x + poly[i];
    }
    return res;
}

int main(){
    string str;
    while(getline(cin,str)){
        poly.clear();
        split_string(str,poly);
        getline(cin,str);
        vector<int> v;
        split_string(str,v);
        int space = 0;
        for(auto x : v){
            if(space) printf(" "); space=1;
            printf("%d", Horner(x));
        }
        printf("\n");
    }
    return 0;
}