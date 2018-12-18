import java.io.*;
import java.math.BigInteger;

class PE_016 {
	public static void main (String[] args) {
		String num = BigInteger.ONE.shiftLeft(1000).toString();
		int sum = 0;
		for (int i=0; i<num.length(); i++)
			sum += num.charAt(i) - '0';
		
		System.out.println(sum);
	}
}

/* Answer : 1366 */