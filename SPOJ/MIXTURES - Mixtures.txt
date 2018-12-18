#include <bits/stdc++.h>
using namespace std;

int ar[101];
int dp[101][101];

int sum(int a, int b){
    int s=0;
    for(int i=a;i<=b;i++)
        s+=ar[i];
    return s%100;
}

int mix(int beg, int end){
    if(beg==end) return 0;
    if(dp[beg][end]!=-1) return dp[beg][end];
    int minSmoke= 1<<30;
    for(int mid=beg;mid<end;mid++){
        int smoke= mix(beg,mid) + mix(mid+1,end) + sum(beg,mid)*sum(mid+1, end);
        minSmoke= min(minSmoke,smoke);
    }
    return dp[beg][end]= minSmoke;
}

int main(){
    int n;
    while(cin>>n){
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++) {
            cin>>ar[i];
        }
        cout<<mix(0,n-1)<<endl;
    }
    return 0;
}
