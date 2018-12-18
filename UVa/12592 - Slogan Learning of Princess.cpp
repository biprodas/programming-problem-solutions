#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    string line1, line2;
    map<string, string> sloganMap;
	
    scanf("%d\n", &n);
    while(n--){
	getline(cin, line1);
	getline(cin, line2);
	sloganMap[line1] = line2;
    }
	
    scanf("%d\n", &q);
    while(q--){
	getline(cin, line1);
	cout<<sloganMap[line1]<<endl;
    }

    return 0;
}