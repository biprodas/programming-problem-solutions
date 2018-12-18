#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
    private:
    int parent[1000006], size[1000006];   //array is 0 based
    int groups=1000006;
    public:
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
    int n, m, k, x, y;
    while(scanf("%d %d",&n, &m)==2){
        if(n==0 && m==0) break;
        DisjointSet dsu(n);
        while(m--){
            scanf("%d",&k);
            scanf("%d",&x);
            for(int i=1;i<k;i++){
                scanf("%d",&y);
                dsu.connect(x, y);
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            if(dsu.root(i)==dsu.root(0)) cnt++;
        }
        cout<<cnt<<endl;
    }
}

