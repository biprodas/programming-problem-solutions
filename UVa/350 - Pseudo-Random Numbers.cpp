//Solution-1
// Floyd's cycle-finding algorithm
#include<bits/stdc++.h>
using namespace std;

int main(){
    int Z,I,M,L, cs=1;
    
    while(1){
        scanf("%d %d %d %d",&Z,&I,&M,&L);
        if(M==0) break;
        
        int tr= L; //tortoise (slow)
        int hr= L; //hare (fast)
        
        //find the first meeting point of hare and tortoise
        do{
            tr=(tr*Z+I)%M;  //one step ahead
            hr=(hr*Z+I)%M;
            hr=(hr*Z+I)%M;  //two step ahead
        } while(hr!=tr);    //until hr catch tr
        
        //cout<<tr<<endl;
        
        int newTr= L;   //new torroise at the start position
        //find the first node of the cycle.
        while(newTr!=tr){
            newTr=(newTr*Z+I)%M;
            tr=(tr*Z+I)%M;
        }
        //Now both tortoises are at the same point (at the first node of the cycle)
        
        int n=0;
        //find the length of the cycle.
        do{
            newTr=(newTr*Z+I)%M;
            n++;
        }while(newTr!=tr); //until new tortoise again meet old one
        
        printf("Case %d: %d\n",cs++,n);
    }
    
    return 0;
}

/*
//Solution-2
int main(){
    //freopen("in.txt","r",stdin);

    int z, i, m, l, cs=1;
    while(true){
        cin>>z>>i>>m>>l;
        if(z==0 && i==0 && m==0 && l==0) break;
        map<int, int> mp;
        map<int, int>::iterator it;
        int c=1;
        mp[l]=c;
        while(true){
            l= (z*l+i)%m;
            if(mp[l]>0) break;
            mp[l]=++c;
            //cout<<l<<" "<<c<<endl;
        }
        int ans= mp.size()+1-mp[l];
        printf("Case %d: %d\n",cs++,ans);

    }
    return 0;
}
*/
