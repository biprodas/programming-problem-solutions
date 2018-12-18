import java.io.*;
import java.util.*;
import java.math.BigInteger;

class LargeSum {
	public static void main (String[] args){
	    Scanner scan= new Scanner(System.in);
	    
	    BigInteger sum= BigInteger.ZERO;
	    
	    while(scan.hasNext()){
	        String num= scan.next();
	        sum = sum.add(new BigInteger(num));
	    }

	    System.out.println(sum.toString().substring(0, 10));
	}
}

/* Answer : 5537376230*/