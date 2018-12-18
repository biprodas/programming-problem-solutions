#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

#define M 1000006
vector<int> prime;
int n, x;

int status[(M/32)+2];
bool Check(int n, int pos){return (bool)(n&(1<<pos));}
int Set(int n, int pos){ return n= n|(1<<pos);} 
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    return Check(status[n>>5],n&31)==0; //return !Check(status[n/32],n%32);
}
void sieve() {
    for(int i=3; i*i<=M; i+=2) {
        if(Check(status[i>>5],i&31) == false) { // i/32 = i>>5, i%32 = i&31
            for (int j=i*i; j<=M; j+=(i<<1)) // 2*i = i<<1
                status[j>>5]= Set(status[j>>5], j&31);
        }
    }
    prime.push_back(2);
    for(int i=3;i<=M;i+=2){
        if(isPrime(i)) 
	        prime.push_back(i);
    }
}

main() {
    sieve();
    int t, L, R;
    sc(t);
    while(t--){
        scc(L,R);
        int freq[prime.size()+3] = {0};
        int low = int(lower_bound(prime.begin(), prime.end(), L) - prime.begin());
        int up = int(upper_bound(prime.begin(), prime.end(), R) - prime.begin());
        int mx = 0, sz = 0, cnt = 0, idx=0;
        for (int i=low+1; i<up; i++) {
            int d = prime[i] - prime[i-1];
            freq[d]++;
            sz = max(sz, d);
            if(freq[d]>mx){
                mx = freq[d];
                idx = d;
            }
            mx = max(mx, freq[d]);
        }
        for(int i=0;i<=sz;i++){
            if(freq[i]==mx) cnt++;
            if(cnt>1) break;
        }
        if (cnt>1 || mx==0) puts("No jumping champion");
        else printf("The jumping champion is %d\n", idx);
    }
}
