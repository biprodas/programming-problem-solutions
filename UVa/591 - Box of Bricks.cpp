#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cs=0;
    while(cin>>n && n){
        int ar[n], sum=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum += ar[i];
        }
        int avg = sum/n, diff, sumDiff=0;
        for(int i=0;i<n;i++){
            sumDiff += abs(avg - ar[i]);
        }
        int ans = sumDiff/2;
        
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", ++cs, ans);
    }
}
