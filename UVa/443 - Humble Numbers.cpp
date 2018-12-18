#include <bits/stdc++.h>
using namespace std;

int humble[5842+3];
string s[]= {"th", "st", "nd", "rd"};

int min(int a, int b, int c, int d){
    int m=a;
    if(b<m) m=b;
    if(c<m) m=c;
    if(d<m) m=d;
    return m;
}
void generateHumble(void){
    humble[1] = 1;
    int w = 1, x = 1, y = 1, z = 1;
    for(int i=2; i<=5842; i++){
        humble[i] = min(2*humble[w], 3*humble[x], 5*humble[y], 7*humble[z]);
        if(humble[i] == 2*humble[w]) w++;
        if(humble[i] == 3*humble[x]) x++;
        if(humble[i] == 5*humble[y]) y++;
        if(humble[i] == 7*humble[z]) z++;
    }
}

int main(){
    generateHumble();
    int n; string suffix;
    while(scanf("%d",&n) && n){
        suffix = (n%10 < 4) ? s[n%10] : "th";
        if(n%100 > 10 && n%100 < 20) suffix = "th";
        cout<<"The "<<n<<suffix<<" humble number is "<<humble[n]<<".\n";
    }

    return 0;
}
