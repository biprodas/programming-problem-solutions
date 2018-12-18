import java.io.*;
import java.util.*;
import java.math.*;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    while(sc.hasNext()){
	        BigInteger n = new BigInteger(sc.next());
	        BigInteger a = new BigInteger(sc.next());
	        BigInteger sum = BigInteger.ZERO;
	        for(int i=1; i <= n.intValue(); i++){
	            sum = sum.add(BigInteger.valueOf(i).multiply(a.pow(i)));
	        }
	        System.out.println(sum);
	    }
	}
}