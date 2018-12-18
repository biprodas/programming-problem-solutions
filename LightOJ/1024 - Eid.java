 
import java.io.*;
/*  
    Author	:  Biprodas Roy  [ CSE, JUST. ]
    Problem	:  LightOJ- 1024 - Eid
    Algorithm 	:  Number Theory [LCM, BigInteger]
*/
 
import java.io.*;
import java.math.*;
import java.util.*;
class Main {
	public static void main(String[] args) throws IOException  {
	    FasterScanner in = new FasterScanner();
		
		int tc= in.nextInt();
		
		for(int cs=1;cs<=tc; cs++){
		    int n= in.nextInt();
		    BigInteger res= BigInteger.valueOf(in.nextInt());
		    n--;
		    while(n-->0){
		        BigInteger x= BigInteger.valueOf(in.nextInt());
		        res = lcm(res, x);
		    }
		    System.out.println("Case "+cs+": "+res);
		    System.gc();
		}
	}
	
	public static BigInteger lcm(BigInteger  a, BigInteger b) {
        return a.multiply(b.divide(a.gcd(b)));
    }
}

class FasterScanner {
    private InputStream mIs;
    private byte[] buf = new byte[1024];
    private int curChar;
    private int numChars;
 
    public FasterScanner() {
        this(System.in);
    }
 
    public FasterScanner(InputStream is) {
        mIs = is;
    }
 
    public int read() {
    if (numChars == -1)
            throw new InputMismatchException();
        if (curChar >= numChars) {
            curChar = 0;
            try {
                numChars = mIs.read(buf);
            } catch (IOException e) {
                throw new InputMismatchException();
            }
            if (numChars <= 0)
                return -1;
        }
        return buf[curChar++];
    }
 
    public String nextLine() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        StringBuilder res = new StringBuilder();
        do {
            res.appendCodePoint(c);
            c = read();
        } while (!isEndOfLine(c));
        return res.toString();
    }
 
    public String nextString() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        StringBuilder res = new StringBuilder();
        do {
            res.appendCodePoint(c);
            c = read();
        } while (!isSpaceChar(c));
        return res.toString();
    }
 
    public long nextLong() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        long res = 0;
        do {
            if (c < '0' || c > '9')
                throw new InputMismatchException();
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }
 
    public int nextInt() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        int res = 0;
        do {
            if (c < '0' || c > '9')
            throw new InputMismatchException();
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }
 
    public boolean isSpaceChar(int c) {
        return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
    }
 
    public boolean isEndOfLine(int c) {
        return c == '\n' || c == '\r' || c == -1;
    }
 
}