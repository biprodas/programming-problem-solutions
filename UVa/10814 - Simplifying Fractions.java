import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
		while(n-- > 0){
		    BigInteger p = sc.nextBigInteger();
		    String s = sc.next();
		    BigInteger q = sc.nextBigInteger();
		    BigInteger g = p.gcd(q);
		    System.out.println(p.divide(g) + " / " + q.divide(g));
		}
	}
}
