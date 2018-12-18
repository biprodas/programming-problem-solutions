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
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(left, b, mid);
    init(right, mid + 1, e);
    tree[node] = tree[left] + tree[right];
}
int query(int node, int b, int e, int i, int j)
{
// range represented by a node is completely outside the given range
    if (i > e || j < b)
        return 0;
// range represented by a node is completely inside the given range
    if (b >= i && e <= j)
        return tree[node];
// range represented by a node is partially inside and partially outside the given range
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; //outside the range
    if (b >= i && e <= i) { //relevant segment
        tmp= tree[node];
        if(newvalue==0) tree[node]= 0;
        else tree[node] += newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{   //freopen("in.txt","r",stdin);
    int t, n, q, v, i, j, c, x, y;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++){
        printf("Case %d:\n",cs);
         scanf("%d %d",&n, &q);
         for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
         init(1,1,n);
         for(int i=1;i<=q;i++){
             scanf("%d %d",&c, &x);
             if(c==1){ //donate x'th sack to poor
                update(1,1,n,x+1,0);
                printf("%d\n",tmp);
             }
             if(c==2){ //add amount y to index x
                scanf("%d",&y);
                update(1,1,n,x+1,y);
             }
 
             if(c==3){ //query x to y
                scanf("%d",&y);
                printf("%d\n",query(1, 1, n, x+1, y+1));
             }
         }
 
    }
    return 0;
}