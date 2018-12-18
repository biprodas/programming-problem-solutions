#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=1, k=2, start=1;
    while(start<1001*1001){
        for(int i=0;i<4;i++){
            start += k;
            sum += start;
            //cout<<start<<" ";
        }
        k += 2;
    }
    cout<<sum;
}

/* Answer : 669171001 */