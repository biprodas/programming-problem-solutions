//slon-1
#include<bits/stdc++.h>
using namespace std;
int age[2000006];
int main(){
    freopen("in.txt","r",stdin);
    int n;
    while(scanf("%d",&n)==1){
        if(n==0) break;
        //int age[n];
        for(int i=0;i<n;i++){
            scanf("%d ",&age[i]);
        }
        sort(age,age+n);
        for(int i=0;i<n-1;i++)
            printf("%d ",age[i]);
        printf("%d\n",age[n-1]);
    }
    return 0;
}
--------------------------------------
//soln-2
#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    priority_queue<int, vector<int>, greater<int> > age;
    int n, x;
    while(scanf("%d",&n)==1){
        if(n==0) break;

        for(int i=0;i<n;i++){
            scanf("%d",&x);
            age.push(x);
        }
        while(!age.empty()){
            printf("%d",age.top());
            age.pop();
            if(!age.empty()) printf(" ");
        }
        printf("\n");
    }
    return 0;
}