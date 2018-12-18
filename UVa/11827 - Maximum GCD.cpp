#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
    cin.ignore();
    while(t--){
        string s;
		getline(cin,s);
		istringstream is(s);
		int i=0;
		int ar[101];

		while(is>>ar[i])
		    i++;
		int n=i;
		int ans= 0;

		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				ans= max(ans, __gcd(ar[i],ar[j]));

		cout<<ans<<endl;
	}

	return 0;
}
