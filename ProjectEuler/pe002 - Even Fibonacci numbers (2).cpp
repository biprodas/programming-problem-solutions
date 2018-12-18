int main(){
    int fst=1, sec=2, sum=2;
    while(sec<1000000){
	    fst= fst+sec;
	    if(!(fst&1)) sum += fst;
	    sec= fst+sec;
	    if(!(sec&1)) sum += sec;
    }
    cout<<sum;
}

OR:
This may be a small improvement.  The Fibonacci series is:
=> 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610...
Now, replacing an odd number with O and an even with E, we get:
=> O, O, E, O, O, E, O, O, E, O, O, E, O, O, E...
And so each third number is even.  We don't need to calculate the odd numbers.
 Starting from an two odd terms x, y, the series is:
=> x, y, x + y, x + 2y, 2x + 3y, 3x + 5y

My code:
int main(){
    int x=1, y=1;
    int sum= 0;
    while (sum<4000000){
	    sum+= (x+y);
	    int t= x;
	    x= x+2*y;
	    y= 2*t+3*y;
    }
    cout<< sum;
}
