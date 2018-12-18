#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a, b, c, d, l, f=0;
    while(scanf("%d %d %d %d %d", &a,&b,&c,&d,&l)==5){
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        int x=0;
        for(int i=0;i<=l;i++){
            f=(a*i*i)+(b*i)+c;
            if(f%d==0)
                x++;
        }
        cout<<x<<endl;
    }
return 0;
}

//complexity: O(L)
//2.
#include <bits/stdc++.h>

using namespace std;

#ifdef __GNUC__
typedef long long LL;typedef unsigned long long LLU;
#else
typedef __int64 LL;  typedef unsigned __int64 LLU;
#endif

typedef pair<int,int> PII;
typedef pair<double,double> PDD;
typedef pair<LL,LL> PLL;
typedef vector<int> VI;
typedef vector<double> VD;
typedef vector<LL> VLL;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<PDD> VPDD;
typedef vector<PLL> VPLL;
typedef map<string,int> MSI;
typedef map<int,int> MII;
typedef map<PII,int> MPI;

#define MAX 1000
#define MOD 1000000009
#define PI 3.14159265358979323846264338327950
#define EPS 1e-9
#define INF 2000000000

#define REP(x,a,b) for(int x = int(a); x<=int(b); x++)
#define REPi(n) for(int i = 0; i<n; i++)
#define REPj(n) for(int j = 0; j<n; j++)

#define TAKEi1(x) scanf("%d", &x)
#define TAKEi2(x,y) scanf("%d %d", &x, &y)
#define TAKEi3(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define TAKEll1(x) scanf("%lld", &x)
#define TAKEll2(x,y) scanf("%lld %lld", &x, &y)
#define TAKEll3(x,y,z) scanf("%lld %lld %lld", &x, &y, &z)
#define TAKEd1(x) scanf("%lf", &x)
#define TAKEd2(x,y) scanf("%lf %lf", &x, &y)
#define TAKEd3(x,y,z) scanf("%lf %lf %lf", &x, &y, &z)
#define OUTi(x) printf("%d\n",x)
#define OUTll(x) printf("%lld\n",x)
#define OUTd(x) printf("%lf\n",x)
#define NL puts("");
#define DEB(str) cout<<str<<endl;
#define DEB1(x) cout<<x<<endl
#define DEB2(x,y) cout<<x<<' '<<y<<endl
#define DEB3(x,y,z) cout<<x<<' '<<y<<' '<<z<<endl

#define MEM(x,y) memset(x,y,sizeof(x))
#define SORT(x) sort(x.begin(),x.end())
#define POP(x) __builtin_popcount(x)
#define GCD(x,y) __gcd(x,y)
#define LCM(x,y) ( (x*y)/__gcd(x,y) )

#define PB push_back
#define PoB pop_back
#define PF push_front
#define PoF pop_front
#define MP make_pair
#define P1 first
#define P2 second

#define IN(f) freopen(f, "r", stdin)
#define OUT(f) freopen(f, "w", stdout)

template<class T> inline bool Equal(T x, T y) { return fabs(x-y) < EPS;}
template<class T> inline T Exp( T x, T y) { if(y==0) return 1; if(y==1) return x; T ans=Exp(x,T(LL(y)/2)); return ans*ans*Exp(x,T(LL(y)%2));}
template<class T> inline T Mod(T n, T m) { return (n%m + m)%m;}

template<class T> inline T Set(T N,T pos) { return N | (1<<pos);}
template<class T> inline T Reset(T N,T pos) { return N & ~(1<<pos);}
template<class T> inline bool Check(T N, T pos) { return N & (1<<pos);}

int main()
{
//    IN("in.txt");
//    OUT("out.txt");
//    std::ios_base::sync_with_stdio(false);
    int a,b,c,d,L;

    while(1)
    {
        TAKEi3(a,b,c);
        TAKEi2(d,L);
        if(!a && !b && !c && !d && !L) return 0;
        int cnt = 0;
        for(int x = 0; x<=L; x++)
        {
            int m = ((a%d) * (x%d) * (x%d))%d;
            int n = ((b%d) * (x%d))%d;
            int o = c%d;
            int mod = ( (m+n)%d + o)%d;
            if(mod==0) cnt++;
        }
        OUTi(cnt);
    }

    return 0;
}
