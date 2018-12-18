#include <bits/stdc++.h>
using namespace std;

#define M 1000000
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
    for(int i=3;i<=M;i+=2){
	    if(isPrime(i)) primeList.push_back(i);
    }
}

int toInt(string s){
    return atoi(s.c_str());
}
string toString(int n){
    string r="";
    while(n){
        r = (char)(n%10 + 48) + r;
        n /= 10;
    }
    return r;
}
bool isCircularPrime(int n) {
    string s = toString(n);
    for(int i=0; i<s.length(); i++) {
    	int x= toInt(s.substr(i) + s.substr(0, i));
	if(!isPrime(x))
	    return false;
    }
    return true;
}

int main(){
    sieve();
    int res=0;
    for(auto p : primeList){
        if(isCircularPrime(p)) res++;
    } 
    cout<<res;
    return 0;
}

/* Answer : 55 */

