#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        scanf("%d", &n);
        init(n);
        map<string, int> friends;
        int sz= 0;
        while(n--) {
            string fr1, fr2;
            cin>>fr1>>fr2;
            int fr1Id = friends[fr1];
            int fr2Id = friends[fr2];
            if(fr1Id == 0) 
                friends[fr1] = ++sz, fr1Id=sz;
            if(fr2Id == 0)
                friends[fr2] = ++sz, fr2Id=sz;
            printf("%d\n", weightedConnect(fr1Id, fr2Id));
        }
    }
    return 0;
}