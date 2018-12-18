import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    static BigInteger factorial(int n){
        BigInteger fact = BigInteger.ONE;
        for(int i=1; i<=n; i++){
            fact = fact.multiply(BigInteger.valueOf(i));
        }
        return fact;
    }
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int n = sc.nextInt();
            if(n==0) break;
            BigInteger res = factorial(2*n).divide(factorial(n+1));
            System.out.println(res.toString());
        }
    }
}
