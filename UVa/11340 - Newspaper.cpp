#include <bits/stdc++.h>
using namespace std;

int ar[300];

int main() {
	int n, x, m, k;
	int total=0;
	string s;
	unsigned char ch;

	scanf("%d\n", &n);
	while(n--){
	    scanf("%d\n", &k);
	    memset(ar,0,sizeof(ar));

	    for(int i=0; i<k; i++) {
		cin >> ch >> x;
		cin.ignore();
		ar[(int) ch] = x;
		//cout<<ch<<" "<<ar[ch]<<endl;
	    }
        
            total = 0;
            scanf("%d\n", &m);
	    for(int i=0; i<m; i++) {
      	        while ((ch = cin.get()) != '\n') {
		    total += ar[(int) ch];
                }
	    }
 
       	    printf("%.2f$\n", total / 100.0);
	}

	return 0;
}
