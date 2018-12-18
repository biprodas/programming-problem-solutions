#include <bits/stdc++.h>
using namespace std;
#define M 10004

vector<int> primeList;

int status[(M/32)+2];
bool Check(int n, int pos){return (bool)(n&(1<<pos));}
int Set(int n, int pos){ return n= n|(1<<pos);} 

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return Check(status[n>>5],n&31)==0; //return !Check(status[n/32],n%32);
}
void sieve() {
    for(int i=3; i*i<=M; i+=2) {
        if(Check(status[i>>5],i&31) == false) { // i/32 = i>>5, i%32 = i&31
            for (int j=i*i; j<=M; j+=(i<<1)) // 2*i = i<<1
                status[j>>5]= Set(status[j>>5], j&31);
        }
    }
    primeList.push_back(2);
    for(int i=3;i<M;i+=2) 
        if(isPrime(i)) primeList.push_back(i);
}


int main(){
    sieve();
    int t, n, p, x;
    cin>>t;
    while(t--){
        scanf("%d", &n);
        int sz = primeList.size();
        bool done = false;
        for(p=1; ;p++){
            for(int i=0;i<sz;i++){
                x = primeList[i];
                if(p * x + x > n) {
                    done = true;
                    break;
                }
            }
            if(done) break;
        }
        cout<<x<<endl;
    }
}

/*  n-p*x will be minimum, only when p*x is maximum and p*x <= n < p*x+x .
    so when p*x+x is just greater than n, means we got our x :) */

