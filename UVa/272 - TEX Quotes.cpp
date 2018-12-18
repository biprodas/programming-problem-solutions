#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    while(scanf("%c", &c)!=EOF){
        bool f;
        if(c=='"'){
            f ? printf("''") : printf("``");
            f= !f;
        }
        else printf("%c",c);
    }
    return 0;
}
