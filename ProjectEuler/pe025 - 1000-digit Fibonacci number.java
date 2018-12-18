import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class PE_025 {
	public static void main(String[] args) {
	    BigInteger num = BigInteger.TEN.pow(1000-1);
		BigInteger x = BigInteger.ONE;
		BigInteger y = BigInteger.ONE;
		BigInteger z;
		int i=2;
		while(true){
		    i++;
		    z= x.add(y);
		    x=y;
		    y=z;
		    if(z.compareTo(num)>=0){
		        System.out.println(i);
		        break;
		    }
		}
	}
}

/* Answer : 4782 */