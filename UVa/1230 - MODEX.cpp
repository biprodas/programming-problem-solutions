#include <bits/stdc++.h>
using namespace std;
#define lng long long

lng binExpMod(lng x, lng n, lng M)
{
    if(n == 0) return 1;
    lng ret = binExpMod(x, n >> 1, M); //n= n/2
    if(n & 1) return (((ret % M) * (ret % M))%M * (x % M)) % M; //n is odd
    return ((ret % M) * (ret % M)) % M; //n is even
}

int main() {
	int c, x, y, n;
	cin>>c;
	while(c--){
	    cin>>x>>y>>n;
	    cout<<binExpMod(x, y, n)<<endl;
	}
	return 0;
}
