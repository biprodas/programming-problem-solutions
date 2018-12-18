#include <bits/stdc++.h>
using namespace std;
#define lng long long

int main(){
    //freopen("in.txt","r",stdin);
    int base, exponent, mx=0, lineNo;

    for(int i=1;i<=1000;i++) {
        scanf("%d, %d\n", &base, &exponent);
        int num = exponent * log(base);
        if(num > mx){
            mx = num;
            lineNo = i;
        }
    }
    cout<<lineNo;
}

/* Answer : 709 */
