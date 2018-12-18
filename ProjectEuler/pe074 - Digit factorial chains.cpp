#include <bits/stdc++.h>
using namespace std;

int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int digitFactorialSum(int n){
	int sum = 0;
	while(n!=0){
	    sum += factorial[n%10];
	    n /= 10;
	}
	return sum;
}
int chainLength(int n){
    set<int> st;
    int len=0;
    while(st.find(n) == st.end()){
        st.insert(n);
        len++;
        n= digitFactorialSum(n);
    }
    return len;
}

int main(){
    int cnt = 0;
    for(int i=0;i<=1000000;i++){
        //cout<<chainLength(69);
        if(chainLength(i)==60) cnt++;
    }
    cout<<cnt;
}

/* Answer : 402 */