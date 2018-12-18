#include <bits/stdc++.h>
using namespace std;
#define lng long long
#define M 100005

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
}

int toInt(string s){
    return atoi(s.c_str());
}

int main(){
    sieve();
    string s;
    while(cin>>s){
        if(s=="0") break;
        int len = s.size(), mx=0, n;
        
        for(int i=0; i<len; i++){
            for(int j=len; j>=i; j--){
                if(j-i > 5) continue;
                n = toInt(s.substr(i, j));
                if(n<100000 && isPrime(n)) mx = max(mx, n);
            }
        }
        cout<<mx<<endl;
    }
    
    return 0;
}



