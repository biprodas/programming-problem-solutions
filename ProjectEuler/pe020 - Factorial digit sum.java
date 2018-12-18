import java.util.*;
import java.math.BigInteger;

public class PE_020 {
	public static void main(String[] args) {
	   	BigInteger fact = BigInteger.valueOf(1);
        	for (int i = 1; i <= 100; i++)
            		fact = fact.multiply(BigInteger.valueOf(i));
            
        	String factorial = fact.toString();
        	int sum=0;
        	for(int i=0; i<factorial.length(); i++)
			sum += factorial.charAt(i) - '0';
			
		System.out.println(sum);
	}
}

/* Answer : 648 */