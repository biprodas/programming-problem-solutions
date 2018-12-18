#include <bits/stdc++.h>
using namespace std;

int knight(int row, int col){
    if (row > col) swap(row, col);
    if (row <= 1) return row*col;
    if (row == 2) return ((col/4)*2 + ((col%4)>2 ? 2 : col%4) ) * 2; 
    //return ((int)((row+1)/2) * (int)((col+1)/2)) + (row - (int)((row+1)/2)) * (int)(col/2);
    return ((row * col) + 1) / 2; 
}

int main() {
    int row, col, ans;
    while(cin>>row>>col){
        if(row==0 && col==0) break;
        printf("%d knights may be placed on a %d row %d column board.\n",knight(row, col), row, col);
    }

    return 0;
}
