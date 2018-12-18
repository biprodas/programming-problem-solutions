#include<bits/stdc++.h>
using namespace std;

int ar[100005];
int n, q;

int binaryLeft(int key){
    int lo=0, hi=n-1;
    int res=-1;
    
    while(lo<=hi){
        int mid = lo + ((hi-lo)>>1);

        if(key>ar[mid]){
            res= ar[mid];
            lo=mid+1;
        }
        else hi= mid-1;
    }
    return res;
}
int binaryRight(int key){
    int lo=0, hi=n-1;
    int res=-1;
    
    while(lo<=hi){
        int mid = lo + ((hi-lo)>>1);

        if(key<ar[mid]){
            res= ar[mid];
            hi=mid-1;
        }
        else lo= mid+1;
    }
    return res;
}

int main(){
    //freopen("in.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    //sort(ar,ar+n); //already sorted
    cin>>q;
    int key;
    while(q--){
        cin>>key;
        int lt= binaryLeft(key);
        int rt= binaryRight(key);
        
        lt==-1 ? printf("X ") : printf("%d ",lt);
        rt==-1 ? printf("X\n") : printf("%d\n",rt);
    }

	return 0;
}
