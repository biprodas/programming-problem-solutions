#include<bits/stdc++.h>
using namespace std;

#define Case(i,x,a,b,c,d) printf("Case #%d: %d = %d * %d = %d * %d\n",i,x,a,b,c,d);
int cs=1;

vector<int> divisors(int N){
    vector<int> v;
    int s=sqrt(N);
    int c=0;
    for(int i=2;i*i<=N;i++){
        if(N%i==0){
            v.push_back(i);
            v.push_back(N/i);
            c++;
        }
        if(c==2) return v;
    }
    return v;
}

int main(){
    //freopen("in.txt","r",stdin);
    int n, k;
    cin>>n;
    while(n--){
        cin>>k;
        vector<int> v= divisors(k);
        Case(cs++,k,v[0],v[1],v[2],v[3]); 
    }
    return 0;
}
