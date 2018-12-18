#include<iostream>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=1; t<=test;t++){
        int term1, term2, f, atn, ct1, ct2, ct3;
        int sum=0, av=0;
        cin>>term1>> term2>> f>> atn>> ct1>> ct2>> ct3;
        if(ct1<=ct2&&ct1<=ct3)
            av = ct2+ct3;
        else if(ct2<=ct1&&ct2<=ct3)
            av = ct1+ct3;
        else if(ct3<=ct2&&ct3<=ct1)
            av = ct1+ct2;

        int avarage=av/2;
        sum = term1+term2+f+atn+avarage;

        int a = sum/10;
        //cout<<a;
        switch(a){
            case 10:
            case 9: cout<<"Case "<<t<<": A"<<endl;
                    break;
            case 8: cout<<"Case "<<t<<": B"<<endl;
                    break;
            case 7: cout<<"Case "<<t<<": C"<<endl;
                    break;
            case 6: cout<<"Case "<<t<<": D"<<endl;
                    break;
            default: cout<<"Case "<<t<<": F"<<endl;
            break;
        }



    }


return 0;
}
