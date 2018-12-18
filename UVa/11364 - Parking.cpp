#include <bits/stdc++.h>
using namespace std;

int ar[21];

int main() {
    int t, n;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++) 
            scanf("%d",&ar[i]);
        sort(ar,ar+n);
        int ans= 2*(ar[n-1]-ar[0]);
        printf("%d\n",ans);
    }
        
    return 0;
}
