#include <bits/stdc++.h>
using namespace std;

//pre compute factorials for 0...9 
int factorials[]= { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };

int digitFactorialSum(int n){
    int sum = 0;
    while(n != 0){
        sum += factorials[n % 10];
        n /= 10;
    }
    return sum;
}
	
int main(){
    int sum = 0;
    for(int i=3; i<=9999999; i++) { //since 1 and 2 are excluded
        if(i==digitFactorialSum(i))
            sum += i;
	}
    cout<<sum;
}

/* Answer : 40730 */