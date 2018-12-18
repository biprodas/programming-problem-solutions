//DP- CoinChange problem (same as problem-076)
#include<bits/stdc++.h>
using namespace std;
#define M 5003

vector<int> primeList;
int dp[102][102], n;

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
    for(int i=3;i<=M;i+=2){
	    if(isPrime(i)) primeList.push_back(i);
    }
}

int ways(int i, int amount){
    if(primeList[i]>n) return amount==0 ? 1 : 0;
    if(dp[i][amount]!=-1) return dp[i][amount];

    int ret=0;
    if(amount-primeList[i]>=0)
        ret += ways(i, amount-primeList[i]);
    ret += ways(i+1, amount);

    return dp[i][amount] = ret;
}

int main(){
    sieve();
    memset(dp,-1,sizeof(dp));
    int wys=0;
    for(int i=1;wys<=5000;i++){
        n=i;
        wys= ways(0, i);
        //cout<<wys<<endl;
    }
    cout<<n;
    
    return 0;
}

/* Answer : 71 */