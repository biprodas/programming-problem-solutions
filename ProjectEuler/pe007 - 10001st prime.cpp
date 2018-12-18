#include<bits/stdc++.h>
using namespace std;

#define M 10000001
bool marked[M];
vector<int> p;

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false; //return true if n is prime
}

void sieve(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
            //p.push_back(i);
      for (int j = i * i; j <= n; j += i + i) {
        marked[j] = true;
      }
    }
  }
}

int main(){
    sieve(1000001);
    //cout<<isPrime(23)<<endl;
    int c=0;
    for(int i=2;c<9;i++){
        if(isPrime(i)){
            p.push_back(i);
            c++;
        }
    }
    c=c-1;
    cout<<p.at(c);


return 0;
}
