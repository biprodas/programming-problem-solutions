#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;

    while(cin>>n && n) {
	priority_queue<int, vector<int>, greater<int> > pq;
	while(n--){
	    cin>>x;
	    pq.push(x);
	}
	int a, b, cost=0;
	while(pq.size()>1) {
	    a = pq.top(); pq.pop();
	    b = pq.top(); pq.pop();
	    cost += (a+b);
	    pq.push(a+b);
	}
	printf("%d\n", cost);
    }

    return 0;
}