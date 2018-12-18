import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger zero = BigInteger.ZERO;
        BigInteger one = BigInteger.ONE;
        BigInteger two = new BigInteger("2");
        
        while(sc.hasNext()){
            BigInteger n = sc.nextBigInteger();
            BigInteger p = n.pow(2);
            String ans = "";
            if(n.compareTo(zero) == 0) ans = "1";
            else if(n.compareTo(one) == 0) ans = "2";
            else ans = p.subtract(n).add(two).toString();
            System.out.println(ans);
        }
        
    }
}