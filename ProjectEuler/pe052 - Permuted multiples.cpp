#include <bits/stdc++.h>
using namespace std;

bool hasSameDigits(int n, int m) {
    int d[10]= {0};
    while(n) { d[n % 10]++; n /= 10; }
    while(m) { d[m % 10]--; m /= 10; }
    for(int i=0; i<10; i++) if(d[i]) return false;
    return true;
}

int main(){
    bool found = false;
    int i=0; 
    while(!found){
        ++i;
        found = true;
	for(int j=2; j<=6; j++) {
	    if(!hasSameDigits(i, i*j)){
		found= false;
		break;
            }
	}
    }
    cout<<i;
    return 0;
}

/* Answer : 142857 */