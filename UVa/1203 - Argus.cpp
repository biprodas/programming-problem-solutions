#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define piii pair<int, pii>

int main() {
    string reg;
    int qnum, period, k;
    priority_queue< piii, vector<piii>, greater<piii> > pq;

    while(cin>>reg){
	if(reg=="#") break;
	cin>>qnum>>period;
	pq.push({period, {qnum, period}});
    }

    cin>>k;
    while(k--) {
	piii x = pq.top();
	pq.pop();
	cout << x.second.first <<endl;
	x.first += x.second.second;
	pq.push(x);
    }

    return 0;
}