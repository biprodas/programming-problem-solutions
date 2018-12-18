#include <bits/stdc++.h>
using namespace std;
#define lng long long

multiset<int> urn;
multiset<int>::iterator lowest, highest;

int main(){
    int n, k, a;
    
    while(scanf("%d",&n) && n){
        lng ans=0;
        urn.clear();
        
        for(int i=0; i<n; i++){
            scanf("%d",&k);
            for(int j=0; j<k; j++){
                scanf("%d",&a);
                urn.insert(a);
            }
            
            lowest = urn.begin();
            highest = --urn.end();
            
            ans += (*highest - *lowest);
            
            urn.erase(lowest); 
            urn.erase(highest);
        }

        printf("%lld\n",ans);
    }
    
    return 0;
}