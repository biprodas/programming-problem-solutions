import java.util.*;
import java.math.BigInteger;

public class PE_056 {
    	public static int digitSum(BigInteger n) {
		int sum = 0;
		String s = n.toString();
		for(int i=0; i<s.length(); i++)
			sum += s.charAt(i)-'0';
		return sum;
	}
	
	public static void main(String[] args) {
	    	int mx = 0;
		for(int a=1; a<100; a++) {
			for(int b=1; b<100; b++) {
				BigInteger power = BigInteger.valueOf(a).pow(b);
				int sum = digitSum(power);
                		if (sum > mx) mx = sum;
			}
		}
		System.out.println(mx);
	}
	
}

/* Answer : 972 */