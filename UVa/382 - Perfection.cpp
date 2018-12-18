#include<bits/stdc++.h>
using namespace std;

int divisors(int N){
    int sum=1;
    int s=sqrt(N);
    for(int i=2;i*i<=N;i++){
        if(N%i==0){
            sum+= i+(N/i);
        }
    }
    if(s*s==N) sum-=s;
    return sum;
}
void init(){
    int n, d;
    while(cin>>n){
        if(n==0) break;
        d=divisors(n);
        cout<<setw(5)<<n;
        if(d==n) printf("  PERFECT\n");
        else if(d<n) printf("  DEFICIENT\n");
        else printf("  ABUNDANT\n");
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    printf("PERFECTION OUTPUT\n");
    init();
    printf("END OF OUTPUT\n");
    return 0;
}
