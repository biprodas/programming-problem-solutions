#include <bits/stdc++.h>
using namespace std;

vector<int> primeList;
int ans[10004]={0};

bool isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    }
    return true;
}

int pre(){
    primeList.push_back(2);
    for(int i=3;i<=10000;i+=2){
        if(isPrime(i)) primeList.push_back(i);
    }
    int limit = primeList.size();
    for(int i=0; i<limit; i++){
        int sum=0;
        for(int j=i; j<limit; j++){
            sum += primeList[j];
            if(sum>10000) break;
            ans[sum]++;
        }
    }
}

int main(){
    pre();
    int n, x;
    while(scanf("%d",&n) && n){
        printf("%d\n",ans[n]);
    }
}



