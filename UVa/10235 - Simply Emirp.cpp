//1.
#include<iostream>
#include<cstdio>
bool isPrime(int n);
int reverseNumber(int n);

using namespace std;
int main(){
    int n, p;
    while(scanf("%d",&n)==1){
        if(!isPrime(n))
            cout<<n<<" is not prime.\n";
        else{
            if(isPrime(p=reverseNumber(n)) && (n<100 || (n>=100 && p!=n)))
                   cout<<n<<" is emirp.\n";
                else
                 cout<<n<<" is prime.\n";
        }
    }
return 0;
}
int reverseNumber(int n){
    int invert = 0;
    while (n != 0){
      invert = invert * 10;
      invert = invert + n%10;
      n = n/10;
    }
    return invert;
}

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

//complexity: O(n^2) for pre-calculation, O(1) for output.

//2. (using seive)
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>

using namespace std;
void sieve(void);

int notPrime[1000005];

int main(){
    sieve();
    char s[10];
    char rev[10];
    while(gets(s)){
        cout<<s<<" is ";
        if(notPrime[atoi(s)]) {
            puts("not prime.");
            continue;
        }
        int len = strlen(s);
        for(int i = 0; i<len; i++){
            rev[i] = s[len-1-i];
        }
        rev[len] = NULL;
        if(!notPrime[atoi(rev)] && strcmp(rev,s))
            puts("emirp.");
        else
            puts("prime.");
    }
    return 0;
}

void sieve(void){
    notPrime[1] = true;
    notPrime[0] = true;
    for(int i = 2; i<=1000000; i++){
        if(!notPrime[i]){
            for(int j = i+i; j<=1000000; j+=i)
                notPrime[j] = true;
        }
    }
    return;
}
