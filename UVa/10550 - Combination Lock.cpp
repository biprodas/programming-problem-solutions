#include <bits/stdc++.h>
using namespace std;

int main(){
    int start, first, second, third;
    while(cin>>start>>first>>second>>third){
        if(!start && !first && !second && !third) break;
        int fixedDeg = 360*2 + 360;
        int deg = ((start-first+40)%40 + (second-first+40)%40 + (second-third+40)%40) * 9;
        cout<<fixedDeg+deg<<endl;
    }
    return 0;
}

