import java.util.*;
import java.math.BigInteger;

public class PE_048 {
	public static void main(String[] args) {
		BigInteger modulus = BigInteger.TEN.pow(10);
		BigInteger sum = BigInteger.ZERO;
		
		for(int i=1; i<=1000; i++)
			sum = sum.add(BigInteger.valueOf(i).pow(i));
		
		System.out.println(sum.mod(modulus));
	}
}

/* Answer : 9110846700 */