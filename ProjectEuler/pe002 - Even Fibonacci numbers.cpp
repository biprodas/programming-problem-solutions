#include<bits/stdc++.h>
using namespace std;
int dp[1001];
int N= 4000000;

int fibonacci(int n){
    if (n<=2) dp[n]=n;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n]= fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    memset(dp,-1,sizeof(dp));
    int i=1, x, sum=0;
    while(fibonacci(i)<=N){
        x=fibonacci(i);
        if(x%2==0) sum+=x;
        i++;
    }
    cout<<sum;
return 0;
}

//Iterative approach
int main(){
    int x=1, y=2, sum=0;
    while (x <= 4000000) {
	if(x%2==0) sum+= x;
        int z= x+y;
	x= y;
	y= z;
    }
    cout<<sum;
return 0;
}
