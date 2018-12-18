#include <bits/stdc++.h>
using namespace std;

int divisorSum(int n){
    int sum = 1;
    int sq= sqrt(n);
    if(sq*sq == n) sum -= sq;
    
    for(int i=2; i<=sq; i++){
        if(n % i == 0){
            sum += (i + (n/i));
            //cout<<i<<" "<<n/i<<" ";
	}
    }
    return sum;
}
bool isAmicable(int n) {
    int m = divisorSum(n);
    return (m != n && divisorSum(m)==n);
}

int main(){
    int sum = 0;
    for(int i=2; i<10000; i++){
        if (isAmicable(i)){
            sum += i;
            //cout<<i<<" ";
        }
    }
    cout<<sum<<endl;
    return 0;
}

/* Answer : 31626 */