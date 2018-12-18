#include <bits/stdc++.h>
using namespace std;

void printDivisors(int c, int r){
    set<int> st;
    if(r==0) st.insert(1);
    int n=c-r;
    int sq = sqrt(n);
    for(int i=2;i<=sq;i++){
        if(n%i==0){
            if(i>r) st.insert(i);
            if(n/i>r) st.insert(n/i);
        }
    }
    st.insert(c-r);
    for(auto a: st) printf(" %d", a);
}

int main(){
    int n, cs=0;
    cin>>n;
    while(n--){
        printf("Case #%d:", ++cs);
        int c, r, q;
        cin>>c>>r;
        
        if(c==r) printf(" 0");
        if(c-r > r) printDivisors(c, r);
        
        printf("\n");
    }
}