#include <bits/stdc++.h>
using namespace std;
#define MX 1000006

//dsu
int parent[100005], size[100005];
void init(int n) {
    for(int i=0; i <= n+3; i++){
        parent[i] = i;
        size[i] = 1;
    }
}
int root(int r){
    return parent[r] == r ? r : root(parent[r]);
}
bool isConnect(int A, int B){
    return root(A)==root(B);
}
int connect(int A, int B){
    parent[root(A)] = root(B);
}
int weightedConnect(int A, int B){
    int root_A = root(A);
    int root_B = root(B);
    if(root_A == root_B) return size[root_A]; //already connected
    
    if(size[root_A] < size[root_B ]){
        parent[root_A] = root_B;
        size[root_B] += size[root_A];
        return size[root_B];
    }
    else{
        parent[root_B] = root_A;
        size[root_A] += size[root_B];
        return size[root_A];
    }
}

int main(){
    int c, r;

    while(scanf("%d %d",&c,&r)){
        if(c==0 && r==0) break;
        string c1, c2;
        int n=0, mx=1;
        map<string, int> mp;
        init(c);
        
        while(c--){
            cin>>c1;
            mp[c1] = ++n;
        }
        while(r--){
            cin >> c1 >> c2;
            mx = max(mx, weightedConnect(mp[c1], mp[c2]));
        }
        cout<<mx<<endl;
    }
    
    return 0;
}