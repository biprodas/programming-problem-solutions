#include <bits/stdc++.h>
using namespace std;
#define lng long long

lng  grid[21][21];
int n=20;

int main() { 
    for(int i=0; i<21; ++i) {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }
    for(int i=1; i<21; i++) {
        for(int j=1; j<21; j++) {
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }
    cout<<grid[n][n];
    return 0;
}

/* Answer : 137846528820 */

/* Alternative Solution:
	(n+n)Pn
	=> (n+n)! / (n!*n!)
*/

