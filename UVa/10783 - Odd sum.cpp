#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    int test,a,b;
    cin>>test;
    for(int t=1; t<=test;){
        while(scanf("%d%d",&a,&b)==2){
            int sum=0;
	    for(int i=a; i<=b; i++){
	        if(i%2==1)
		  sum+=i;
	    }
	 cout<<"Case "<<t++<<": "<<sum<<endl;
        }
    }
return 0;
}
