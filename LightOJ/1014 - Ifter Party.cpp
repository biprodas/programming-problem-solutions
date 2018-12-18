/*  
    Author	:  Biprodas Roy  [ CSE, JUST. ]
    Problem	:  LightOJ- 1014 - Ifter Party
    Algorithm 	:  Number Theory [Divisors]
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, P, L, Q, cs = 0;
    cin>>t;
    while(t--){
        scanf("%d %d", &P, &L);
        
        Q = P-L;
        printf("Case %d:", ++cs);
        if(L >= Q){
            printf(" impossible\n");
            continue;
        }
        
        int sqr = sqrt(Q);
        vector<int> v;
        for(int i=1; i<=sqr; i++){
            if(Q%i == 0){
                if(L < i) v.push_back(i);
                if(Q/i != i && L < Q/i) v.push_back(Q/i);
            }
        }
        
        sort(v.begin(), v.end());
        int sz = v.size();
        if(sz == 0) printf(" impossible");
        else{
            for(int i=0; i < sz; i++){
                printf(" %d", v[i]);
            }
        }
        printf("\n");
    }
    return 0;
}