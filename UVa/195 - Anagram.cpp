#include <bits/stdc++.h>
using namespace std;

bool compare(char a, char b){
    if(tolower(a) == tolower(b)){
	return a<b;
    }
    return tolower(a) < tolower(b);
}

int main() {
    int n;
    cin >> n;
    while(n--){
	string s;
        cin >> s;
	sort(s.begin(), s.end(), compare);
	do{
	    cout<<s<<endl;
      	} while(next_permutation(s.begin(), s.end(), compare));
    }

    return 0;
}
