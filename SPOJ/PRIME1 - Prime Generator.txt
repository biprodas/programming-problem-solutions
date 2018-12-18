#include<iostream>
 #include<iomanip>
 #include<vector>
 #include<cstdio>
 using namespace std;
 bool isPrime(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
            return false;
    }
    return true;
}
 
 vector<int> getPrimes(int x, int y) {
  vector<int> primes;
  for (int i = x; i <= y; i++) {
    if (isPrime(i))
      primes.push_back(i);
  }
  return primes;
}
 
 int main(){
     int test, a, b;
     cin>>test;
     while(test--){
        scanf("%d %d",&a,&b);
        vector<int> primes=getPrimes(a, b);
        for(int prime:primes)
            cout<<prime<<endl;
        cout<<endl;
     }
     return 0;
 
 }