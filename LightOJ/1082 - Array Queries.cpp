#include<bits/stdc++.h>
using namespace std;
#define mx 100003
int arr[mx], tmp;
int tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = min(tree[Left], tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i && e <= j)
        return tree[node]; //relevant segment
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1, p2);
}
int main(){
    int t, n, q, i, j;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        printf("Case %d:\n",cs);
        scanf("%d%d",&n,&q); 
        for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
        init(1,1,n);
        while(q--){
            scanf("%d%d",&i,&j); 
            printf("%d\n",query(1,1,n,i,j));
        }
    }
    return 0;
}
