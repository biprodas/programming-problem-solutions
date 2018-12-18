import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    BigInteger sum = BigInteger.ZERO, n;
		while(true){
		    n = sc.nextBigInteger();
		    if(n.compareTo(BigInteger.ZERO) == 0) break;
		    sum = sum.add(n);
		}
		System.out.println(sum);
	}
}
