#include <bits/stdc++.h>
using namespace std;

bool isVowel(char x){
    return (x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U');
}

int main(){
    char ch;
    while((ch=getchar()) != EOF){
        if(!isalpha(ch))
            printf("%c", ch);
        else if(isVowel(ch)){
            printf("%c", ch);
            while((ch=getchar()) && isalpha(ch)){
                printf("%c", ch);
            }
            printf("ay%c", ch);
        }
        else if(isalpha(ch)){
            char c = ch;
            while((ch=getchar()) && isalpha(ch)){
                printf("%c", ch);
            }
            printf("%cay%c", c, ch);
        }
    }
    return 0;
}