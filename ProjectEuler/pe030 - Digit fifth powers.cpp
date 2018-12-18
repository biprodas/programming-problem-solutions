#include <bits/stdc++.h>
using namespace std;

bool isEqual_DigitFifthPowerSum(int n){
    int x = n, sum = 0;
    while(x != 0) {
        int p = x % 10; x /= 10;
        sum += p*p*p*p*p;
    }
    return sum == n;
}

int main(){
    int sum=0, i;
    for(i=2; i<1000000; i++){
        if (isEqual_DigitFifthPowerSum(i))
            sum += i;
    }
    cout<<sum;
}

/* Answer : 443839 */

/*  Explanation:
    no. of digit * fiftpower = maxumum possible sum
        9 * 9^5 = 531441    [6-digits < 9-digits]
        8 * 9^5 = 472392    [6-digits < 8-digits]
        7 * 9^5 = 413343    [6-digits < 7-digits]
        6 * 9^5 = 354294    [6-digits = 6-digits; a valid search limit]
    From above observation, we see that for a number that has at least n >= 7 digits, produce a number
    (even for every digit is 9, n * 9^5 is still less than n>=7 digit the number) 
    that is less than the n digit number (which is at least 10^n).
*/