#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 28123 ;
bool isAbundant[LIMIT+1];
	
bool checkAbundant(int n){
    int sum = 1;
	int sq = sqrt(n);
	for(int i = 2; i <= sq; i++) {
	    if (n % i == 0)
		sum += (i + n / i);
	}
	if(sq * sq == n) sum -= sq; //perfect square
	return sum > n; 
}
bool isSumOf2Abundants(int n) {
	for(int i=0; i<=n; i++) {
	    if(isAbundant[i] && isAbundant[n - i])
		return true;
	}
	return false;
}
void pre(){
    for(int i=1; i<LIMIT+1; i++)
	isAbundant[i] = checkAbundant(i);
}

int main(){
    pre();
	int sum = 0;
	for(int i=1; i<=LIMIT; i++) {
		if (!isSumOf2Abundants(i))
			sum += i;
	}
	cout<<sum;
    
	return 0;
}

/* Answer : 4179871 */