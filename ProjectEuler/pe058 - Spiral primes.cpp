#include <bits/stdc++.h>
using namespace std;

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

int main(){
    int k=0, i=1, diagonalPrime=0, diagonalNumbers;
    while(1){
        k += 2;
        for(int j=0;j<4;j++){
            i += k;
            if(isPrime(i)) diagonalPrime++;
        }
        diagonalNumbers = (k+1)*2 - 1;
        if(diagonalPrime*10 < diagonalNumbers) break;
    }
    cout<<k+1;
}

/* Answer : 26241 */
or,
int main(){
    int diagonalPrime=0, diagonalNumbers, n;
    int numPrimes = 0;
    for(n=1; ; n+=2) {
        for(int i=0; i<4; i++) {
            if (isPrime(n*n-i*(n-1)))
                diagonalPrime++;
        }
        diagonalNumbers = n * 2 - 1;
        if (n > 1 && diagonalPrime * 10 < diagonalNumbers)
            break;
    }
    cout<<n;
}

