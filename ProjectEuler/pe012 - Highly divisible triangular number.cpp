#include <bits/stdc++.h>
using namespace std;

int countDivisors(int n) {
	int cnt = 0;
	int sq= sqrt(n);
	for(int i=1; i<=sq; i++) {
		if (n % i == 0) cnt+=2;
	}
	if(sq*sq == n) cnt--; //perfect square
	return cnt;
}

int main(){
    int triangle = 0;
    //cout<<countDivisors(15);
    for(int i=1; ;i++){
        triangle += i;
        if(countDivisors(triangle) > 500)
            return cout<<triangle, 0;
    }
    
	return 0;
}

/* Answer : 76576500 */