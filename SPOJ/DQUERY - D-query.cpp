//MO's Algorithm
#include<bits/stdc++.h>
using namespace std;
#define maxn 300005

const int k = 548; // max block size- sqrt(300005) = ~548
int l=0, r=-1, res=0;
int ar[maxn], ans[200005]={0}, cnt[1000006]={0};

struct query{
    int l, r, id;
} q[maxn];

bool cmp(query &a, query &b){
    int block_a= a.l/k, block_b= b.l/k;
    if(block_a==block_b) return a.r < b.r;
    return block_a < block_b;  
}

void add(int i){
    int x= ar[i];
    cnt[x]++;
    if(cnt[x] == 1) res++;
}

void remove(int i) {
    int x= ar[i];
    cnt[x]--;
    if(cnt[x] == 0) res--;
}

int main(){
    int n, Q, L, R;
    cin>>n;
    for(int i=0; i<n; i++) scanf("%d",&ar[i]);

    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>L>>R;
        //cin >> q[i].l >> q[i].r;
        q[i].l= L-1, q[i].r= R-1; //0 based
        q[i].id= i;
    }
    sort(q, q+Q, cmp);
    
    for(int i=0;i<Q;i++){
        while(l > q[i].l) add(--l);
        while(r < q[i].r) add(++r);
        while(l < q[i].l) remove(l++);
        while(r > q[i].r) remove(r--);
        ans[q[i].id]= res;
    }
    
    for(int i=0; i<Q; i++) printf("%d\n", ans[i]);
    
    return 0;
}