#include <bits/stdc++.h>
using namespace std;

bool isComparison(const string& token) {
    return token==">" || token=="<" || token== ">=" || token == "<=" || token=="=";
}

bool compare(int total, int guess, const string& op) {
    if(op=="<") return total < guess;
    if(op==">") return total > guess;
    if(op=="<=") return total <= guess;
    if(op==">=") return total >= guess;
    if(op=="=") return total == guess;
    return false;
}

int main(){
    int p, g;
    map<string, int> partyMap;

    cin >> p >> g;

    for(int i=0; i<p; i++) {
	string party;
	float percentage;
	cin >> party >> percentage;
	partyMap[party] = (int)(percentage*10);
    }
    cin.ignore();

    for(int i=1;i<=g;++i) {
	string guess, token;
	int total = 0, n;
	
	getline(cin,guess);
	stringstream ss(guess);
		
        string ans = "correct";
	while(ss>>token) {
	    if(token=="+") continue;
	    else if(isComparison(token)) {
		ss >> n;
		n *= 10;
		if(!compare(total, n, token)) ans = "incorrect";
	    } 
	    total += partyMap[token];
	}

	printf("Guess #%d was %s.\n", i, ans.c_str());
    }

    return 0;
}