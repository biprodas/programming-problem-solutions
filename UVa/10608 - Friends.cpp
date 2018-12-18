#include <iostream>
using namespace std;

#define NN 1000006
struct DisjointSet {
    int parent[NN], size[NN];   //array is 1 based
    
    DisjointSet(){	            //constructor
        for(int i=0; i <= NN; i++)
            parent[i]=i, size[i]=1;
    }
    void init(int n){
        for(int i=0; i<=n; i++) parent[i]=i, size[i]=1;
    }
    int root(int r) {
        return parent[r] == r ? r : root(parent[r]);
    }
    bool isConnect(int A, int B){
        return root(A)==root(B);
    }
    int connect(int A, int B){
        parent[root(A)] = root(B);
    }
    int weightedConnect(int A, int B){
        int root_A = root(A), root_B = root(B);
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
};

int main(){
    int t, n, m, a, b;
    cin>>t;
    while(t--){
        scanf("%d %d",&n,&m);
        DisjointSet dsu;
        int mx=1;
        while(m--){
            scanf("%d %d",&a,&b);
            int x= dsu.weightedConnect(a, b);
            mx = max(mx, x);
        }
        cout<<mx<<endl;
    }
    
    return 0;
}


