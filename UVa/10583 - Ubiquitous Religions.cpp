#include <iostream>
using namespace std;

struct DisjointSet {
    int parent[1000006], size[1000006];   //array is 1 based
    int groups=1000006;
    DisjointSet(){
        for(int i=0; i <= 1000006; i++) parent[i]=i, size[i]=1;
    }
    DisjointSet(int NN){
        for(int i=0; i <= NN; i++) parent[i]=i, size[i]=1;
        groups = NN;
    }
    void init(int n){
        for(int i=0; i<=n; i++) parent[i]=i, size[i]=1;
        groups = n;
    }
    int root(int r) {
        return parent[r] == r ? r : root(parent[r]);
    }
    bool isConnect(int A, int B){
        return root(A)==root(B);
    }
    bool connect(int A, int B){
        int root_A = root(A), root_B = root(B);
        if(root_A==root_B) return false; //already connected
        groups--;
        parent[root_A] = root_B;    //new connection
        return true;
    }
    int weightedConnect(int A, int B){
        int root_A = root(A), root_B = root(B);
        if(root_A == root_B) return size[root_A]; //already connected
        groups--;
        //new connection
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
    int totalGroups(){
        return groups;
    }
};

int main(){
    int n, m, a, b, cs=0;
    
    while(scanf("%d %d",&n,&m)){
        if(n==0 && m==0) break;
        DisjointSet dsu(n);
        while(m--){
            scanf("%d %d",&a,&b);
            dsu.connect(a, b);
        }
        printf("Case %d: %d\n",++cs, dsu.totalGroups());
    }
    
    return 0;
}


