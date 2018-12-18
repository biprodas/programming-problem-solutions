#include <iostream>
using namespace std;
#define lng long long

const int limit = 1000000;
int cache[limit+1]={0};

int main() {
    int mxChainLebgth=0, start=1;
    cache[1] = 1;
 
    for(int i=2; i<=limit; i++) {
        lng n= i;
        int k = 0;
        while(n != 1 && n >= i) {
            k++;
            n= n & 1 ? n*3+1 : n/2;
        }
        cache[i] = k + cache[n]; //save the result
    
        if (cache[i] > mxChainLebgth) {
            mxChainLebgth = cache[i];
            start = i;
        }
    }

    cout<<start;
    
    return 0;
}

/* Answer : 837799 */
