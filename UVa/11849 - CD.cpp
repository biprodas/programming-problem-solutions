#include <bits/stdc++.h>
using namespace std;

//using map
int main() {
    int n ,m, x;
    while(cin>>n>>m){
        if(n==0 && m==0) break;
        map<int,int> mp;
        int ans=0;
        for(int i=1;i<=n+m;i++){
            scanf("%d",&x);
            mp.find(x)!=mp.end() ? ans++ : mp[x]=i;
        }
        cout<<ans<<endl;
    }

    return 0;
}

//Using set
int main() {
    int n ,m, x;
    while(scanf("%d%d",&n,&m) && n && m){
        set<int> st;
        for(int i=1;i<=n+m;i++){
            scanf("%d",&x);
            st.insert(x);
        }
        int ans= n + m - (int)st.size();
        cout<<ans<<endl;
    }

    return 0;
}
