//My brute-force solution
import java.util.*;
import java.math.BigInteger;

public class PE_063 {
	public static void main (String[] args) {
		int cnt = 0;
		for(int n=1; n<=9; n++) {
		    for(int k=1; ; k++){
			int x= BigInteger.valueOf(n).pow(k).toString().length();
			if (x == k) cnt++;
			if (x < k) break;
		    }
		}
		System.out.println(cnt);
	}
}

/* Answer : 49 */

/* Alvaro's soluiton from Thread-63 : [See the second comment: https://projecteuler.net/thread=63 ]
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    for(int i=1; i<=9; i++){
        sum += (int) (1.0/(1-log(i)/log(10)));
    }
    cout<<sum;
}
*/