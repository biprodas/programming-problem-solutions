#include <iostream>
using namespace std;

string ONES[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
		"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string TENS[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};


string toWord(int n) {
	if (0 <= n && n < 20) 
		return ONES[n];
	if (20 <= n && n < 100) 
		return TENS[n/10] + ONES[n%10];
	if (100 <= n && n < 1000) 
		return ONES[n/100] + "Hundred" + (n % 100 != 0 ? "And" + toWord(n % 100) : "");
	if (1000 <= n && n < 1000000)
		return toWord(n / 1000) + "Thousand" + (n % 1000 != 0 ? "And" + toWord(n % 1000) : "");
}
	
int main() {
	int sum=0;
	for(int i=1;i<=1000;i++){
        	//cout<<toWord(i)<<endl;
        	sum += toWord(i).length();
    	}
    	cout<<sum;
	return 0;
}

/* Answer : 21124 */
