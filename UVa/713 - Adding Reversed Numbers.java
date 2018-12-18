import java.io.*;
import java.util.*;
import java.math.*;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int n;
	    BigInteger a, b, sum;
	    StringBuffer sb;
	    
	    n = sc.nextInt();
	    while(n-- > 0){
	        sb = new StringBuffer(sc.next());
	        a = new BigInteger(sb.reverse().toString());
	        sb = new StringBuffer(sc.next());
	        b = new BigInteger(sb.reverse().toString());
	        sum = a.add(b);
	        sb = new StringBuffer(sum.toString()).reverse();
	        sum = new BigInteger(sb.toString());
	        System.out.println(sum);
	    }
	    
	}
}