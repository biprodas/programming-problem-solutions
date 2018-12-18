#include <bits/stdc++.h>
using namespace std;

string toString(int n){
    string r="";
    while(n){
        r = (char)(n % 10 + 48) + r;
        n /= 10;
    }
    return r;
}
bool isPandigital(string s){
    if(s.size()!=9) return false;
    sort(s.begin(),s.end());
    return s=="123456789";
}
bool hasPanProduct(int n) {
	for(int i=1; i*i<=n; i++) {
		if(n%i==0 && isPandigital(toString(n)+toString(i)+toString(n/i)))
			return true;
	}
	return false;
}

int main(){
    int sum=0;
    for(int i=1000;i<=10000;i++){
        if(hasPanProduct(i)) sum+=i;
    }
    cout<<sum;
}

/* Answer : 45228 */