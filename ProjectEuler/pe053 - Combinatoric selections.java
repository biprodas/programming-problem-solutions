import java.util.*;
import java.math.BigInteger;

class PE_053 {
    	//calculate nCr :
    	static BigInteger binomial(final int N, final int K) {
        	BigInteger ret = BigInteger.ONE;
        	for(int k=0; k < K; k++) {
            	    ret = ret.multiply(BigInteger.valueOf(N-k)).divide(BigInteger.valueOf(k+1));
        	}
        	return ret;
    	}
    
	public static void main (String[] args) {
	    	int cnt=0;
	    	BigInteger MILLION = new BigInteger("1000000");
        	for(int n=1; n<=100; n++) {
		    for(int r=0; r<=n; r++) {
			if(binomial(n, r).compareTo(MILLION) > 0)
			    cnt++;
		    }
		}
		System.out.println(cnt);
	}
}

/* Answer : 4075 */