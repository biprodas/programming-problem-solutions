#include <bits/stdc++.h>
using namespace std;
#define lng long long
#define triangle(t) t*(t+1)/2
#define pentagon(p) p*(3*p-1)/2
#define hexagon(h)  h*(2*h-1)

int main(){
    lng p = 166, h = 144, mx=0;
    while(pentagon(p) != hexagon(h)){
	mx= max(pentagon(p), hexagon(h));
	while(pentagon(p) < mx) p++;
	while(hexagon(h) < mx) h++;
    }
    cout<<pentagon(p);
    return 0;
}

/* Answer : 1533776805 */

/*
Hexagonal numbers are a subset of Triangle numbers.
Proof:
    H = h*(2h-1)    ...(i)
    T = t*(t+1)/2   ...(ii)
    let, t=2h-1, substitute t=2h-1 in eqn.(ii) we get, 
    T = (2h-1)(2h-1+1)/2 = (2h-1)(2h)/2 
      = h*(2h-1) [that is H]
      
So to make calculation faster we ignored triangle aspects, and 
only determine the first occurrence of Pn = Hm to find our answer.
*/