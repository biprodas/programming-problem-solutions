#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, type, x;
    while(cin>>n){
	stack<int> st;
	queue<int> q;
	priority_queue<int> pq;
	bool isSt = true, isQ = true, isPQ = true;

	while(n--){
	    cin>>type>>x;
	    if(type==1){
		st.push(x);
		q.push(x);
		pq.push(x);
	    }
	    else{
		if(isSt && !st.empty() && (st.top()==x)) st.pop();
		else isSt=false;
			    
		if(isQ && !q.empty() && (q.front()==x)) q.pop();
		else isQ=false;
			    
		if(isPQ && !pq.empty() && (pq.top()==x)) pq.pop();
		else isPQ=false;
	    }
	}
		
	if(isSt && !isQ && !isPQ) printf("stack");
	else if (!isSt && isQ && !isPQ) printf("queue");
	else if (!isSt&& !isQ && isPQ) printf("priority queue");
	else if (!isSt && !isQ && !isPQ) printf("impossible");
	else printf("not sure");
	printf("\n");
    }
}