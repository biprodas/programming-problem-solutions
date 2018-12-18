#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long
#define MX 50005

/*  Example: 2x^3 – 6x^2 + 2x – 1
    The polynomial can be evaluated as: ((2x – 6)x + 2)x – 1 */
vector<int> poly;
int Horner(int x){
    int res = poly[0], sz = poly.size()-1;
    for(int i=1; i<sz; i++){
        res = res*x + poly[i];
    }
    return res;
}

int main(){
    int x, n;
    string str;
    while(scanf("%d\n", &x)==1){
        poly.clear();
        getline(cin, str);
        //cout<<x<<endl<<str<<endl;
        stringstream sin;
        sin<<str;
        while(sin>>n) poly.push_back(n);
        int order = poly.size()-1;
        for(int i=order;i>=0;i--){
            poly[order-i] *= i;
        }
        int ans = Horner(x);
        printf("%d\n",ans);
    }
    return 0;
}