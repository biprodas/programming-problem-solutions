import java.math.BigInteger;
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            String aa = sc.next();
            String op = sc.next();
            String bb = sc.next();
            BigInteger a = new BigInteger(aa);
            BigInteger b = new BigInteger(bb);
            BigInteger mx = new BigInteger("2147483647");
            System.out.println(aa + " " + op + " " + bb);
            if(a.compareTo(mx) > 0) System.out.println("first number too big");
            if(b.compareTo(mx)>0) System.out.println("second number too big");
            BigInteger result = BigInteger.ZERO;
            result= (op.equals("+")) ? a.add(b) : a.multiply(b);
            if(result.compareTo(mx)>0) System.out.println("result too big");
        }
    }
}
