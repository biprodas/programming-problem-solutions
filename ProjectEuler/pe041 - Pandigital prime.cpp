#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    }
    return true;
}
int toInt(string s){
    return atoi(s.c_str());
}
bool isPandigital(string s){
    int len= s.size();
    string d= "123456789";
    sort(s.begin(),s.end());
    return s == d.substr(0,len);
}

int main(){
    string s="7654321", ans;
    bool found=false;
    do{
        if(isPandigital(s) && isPrime(toInt(s)) && !found){
            ans = s;
            found=true;
        }
    } while(prev_permutation(s.begin(), s.end()));
    
    if(!found){
        s="4321";
        do{
            if(isPandigital(s) && isPrime(toInt(s)) && !found){
                ans = s;
                found=true;
            }
        } while(prev_permutation(s.begin(), s.end()));
    }
    cout<<ans;
}

/* Answer : 7652413 */

/*  Explanation:
    We know that any prime number bigger than 3 is not divisible by 3.
    Again, a number is divisible by 3 if the sum of its digits is divisible by 3.
    And if it is true, then that number can not be a prime.
    Observation:
        Digits  Summation           divisible by 3 ?
           4    1+2+3+4 = 10               No  
           5    1+2+3+4+5 = 15             Yes 
           6    1+2+3+4+5+6 = 21           Yes
           7    1+2+3+4+5+6+7 = 28         No 
           8    1+2+3+4+5+6+7+8 = 36       Yes 
           9    1+2+3+4+5+6+7+8+9 = 45     Yes 
    We see that only 4-digit and 7-digit pandigital number can be prime.
    So, just check 4-digit and 7-digit number. Since the answer is the biggest pandigital prime,
    so start with the biggest 7-digit numbers and continue downwards. If ans does not exist here,
    then check for 4-digit numbers. At last one answer must exist here, since we see in problem
    that 2143 is a 4-digit pandigital and is also prime.
*/