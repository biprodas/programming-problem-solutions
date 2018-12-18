//1.
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
     int t, w, n;
     cin>>t;
     while(t--){
        cin>>w>>n;
            int x[n+1], y[n+1];

            for(int i=1;i<=n;i++)
                cin>>x[i]>>y[i];

            int sum=0,d=0; x[0]=0;
                for(int i=1;i<=n;i++){
                        //d++;
                    d+=x[i]-x[i-1];
                    if(sum+y[i]>w){
                        //d+=x[i]-x[i-1];
                       d+=2*x[i];
                       sum=y[i];
                    }
                    else if(sum+y[i]==w && i!=n){
                        //d+=x[i]-x[i-1];
                        d+=2*x[i];
                        sum=0;
                    }
                    else{
                        //d+=x[i]-x[i-1];
                        sum+=y[i];
                    }
                }
                d+=x[n];
                cout<<d<<endl;;
     }
    return 0;
}

//2.
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;

struct point{
    int d;
    int w;
};
int main() {
    int test;
    cin>>test;
    while(test--){
        int weight, n;
        cin>>weight>>n;
        point p[n+1];
        for(int i=1;i<=n;i++)
            cin>>p[i].d>>p[i].w;

        long long sum=0, carry=0; p[0].d=0;

        for(int i=1;i<=n;i++){
            //sum++;
            if(carry+p[i].w>weight){
                sum+=p[i].d-p[i-1].d;
                sum+=2*p[i].d;
                carry=p[i].w;
            }
            else if(carry+p[i].w==weight && i!=n){
                sum+=p[i].d-p[i-1].d;
                sum+=2*p[i].d;
                carry=0;
            }
            else{
                carry+=p[i].w;
                sum+=p[i].d-p[i-1].d;
            }
        }
        sum+=p[n].d;
        cout<<sum<<endl;
    }

    return 0;
}

