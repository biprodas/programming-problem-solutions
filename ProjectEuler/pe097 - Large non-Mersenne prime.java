import java.util.*;
import java.math.BigInteger;

class PE_097 {
	public static void main (String[] args) {
		BigInteger mod = new BigInteger("10000000000");
		BigInteger n = BigInteger.valueOf(2).modPow(BigInteger.valueOf(7830457), mod);
		n = n.multiply(BigInteger.valueOf(28433)).add(BigInteger.ONE).mod(mod);

		System.out.println(n);
	}
}

/* Answer : 8739992577 */