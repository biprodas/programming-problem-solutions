#include <bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%d",&x)
#define sff(x, y) scanf("%d %d",&x, &y)

int n;

int binaryLeft(int* arr, int key){
    int lo=0, hi=n-1, mid;
    int idx=lo;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(key<=arr[mid]){
            idx= mid; //save the index
            hi= mid-1;
        }
        else //if(key>arr[mid])
         	lo=mid+1;
    }
    return idx; 
}

int binaryRight(int* arr, int key){
    int lo=0, hi=n-1, mid;
    int index= n;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(key<arr[mid]){
            index= mid;
            hi= mid-1;
        }
        else //if(key>=arr[mid])
         	lo=mid+1;
    }
    return index-1;
}


int main(){
    //freopen("in.txt","r",stdin);
    int t;
    sf(t);
    for(int cs=1;cs<=t;cs++){
        printf("Case %d:\n",cs);
        int  q, x, y, a, cnt=0;
        sff(n,q);
        int ar[n+1];

        for(int i=0;i<n;i++){
            sf(ar[i]);
        }

        while(q--){
            sff(x,y);
            if(x>ar[n-1] || y<ar[0]) {
                printf("0\n");
                continue;
            }
            int lt= binaryLeft(ar, x);
            int rt= binaryRight(ar, y);
            int ans= rt-lt+1;
            //printf("%d %d\n",lt, rt);
            printf("%d\n",ans);
        }
    }
}
