#include <bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%d",&x)
#define sffff(a,b,c,d) scanf("%lf %lf %lf %lf",&a,&b,&c,&d)
#define eps 1e-7

double AB, AC, BC, R;

double binarySearch(){
    double lo=0.0, hi=AB;
	double s= (AB+BC+AC)/2.0;
    double ABC= sqrt( s*(s-AB)*(s-AC)*(s-BC) ); //Area of ABC triangle
    double AD, DE, AE;
    double ADE, BDEC, r;
    //Find AD until r==R
    while((hi-lo)>eps){
        AD= lo+(hi-lo)/2.0; //mid
        AE= (AC * AD ) / AB;
        DE= (BC * AD ) / AB;
        s= (AD + AE + DE)/2.0;
        ADE= sqrt( s*(s-AD)*(s-DE)*(s-AE) ); //Area of ADE triangle
        BDEC= ABC-ADE; //Area of BDEC Trapezium
        r= ADE/BDEC; //so far what we did is for calculating r

        if(fabs(R-r)<eps) break;
        else if(r>R ) hi = AD;
        else lo = AD;
        //printf("%lf %lf\n",AD, R-r);
    }

    return AD;
}

int main() {
  //freopen("in.txt","r",stdin);
	int t;
	sf(t);
	for(int cs=1;cs<=t;cs++){
	    printf("Case %d: ",cs);
	    sffff(AB,AC,BC,R);
        double AD= binarySearch();
        printf("%lf\n",AD);
	}
	return 0;
}
