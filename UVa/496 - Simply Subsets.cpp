#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

void split_string(const string &s, vector<int> &v) {
	istringstream in(s);
	v.clear();
	copy(istream_iterator<int>(in), istream_iterator<int>(), back_inserter(v));
}

int main(){
    vector<int> A, B;
    string input;

    while(getline(cin, input)){
        A.clear(), B.clear();
        split_string(input, A);
        getline(cin, input);
        split_string(input, B);

        int aa = 0, bb = 0;
        for(auto a : A){
            for(auto b : B){
                if(a==b){
                    aa++;
                    break;
                }
            }
        }
        for(auto b : B){
            for(auto a : A){
                if(b==a){
                    bb++;
                    break;
                }
            }
        }

        if(aa==A.size() && A.size()<B.size())
            printf("A is a proper subset of B\n");
        else if(bb == B.size() && B.size() < A.size())
            printf("B is a proper subset of A\n");
        else if(A.size()==B.size() && aa==A.size() && bb==B.size())
            printf("A equals B\n");
        else if(aa==0 || bb==0)
            printf("A and B are disjoint\n");
        else
            printf("I'm confused!\n");
    }

    return 0;
}