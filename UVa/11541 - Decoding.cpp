#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, cs=0;
    string str;
    scanf("%d\n",&t);
    while(t--){
          getline(cin, str);
          //cout<<str<<endl;
          printf("Case %d: ", ++cs);

          for(int i=0;str[i];){
                char ch = str[i];
                int n=0;
                i++;
                while(isdigit(str[i])){
                    n = (10 * n) + (str[i]-'0');
                    i++;         
                }
                for(int j=0;j<n;j++){
                      printf("%c", ch);
                }   
          }
          printf("\n");
            
    }
  
 return 0;   
}