import java.util.*;
import java.math.BigInteger;

class PE_029 {
	public static void main (String[] args) {
		Set<BigInteger> set = new HashSet<>();
		for(int a=2; a<=100; a++) {
			for(int b=2; b<=100; b++)
				set.add(BigInteger.valueOf(a).pow(b));
		}
		System.out.println(set.size());
	}
}

/* Answer : 9183 */