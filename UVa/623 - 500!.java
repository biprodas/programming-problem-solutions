import java.util.*;
import java.math.*;

class Main{
    static BigInteger[] fact = new BigInteger[1003];
    static void preFacto(){
        fact[0] = BigInteger.ONE;
        for(int i=1; i < fact.length; i++){
            fact[i] = fact[i-1].multiply(new BigInteger(i+""));
        }
    }
        
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        preFacto();
        while(sc.hasNext()){
            int n = sc.nextInt();
            System.out.println(n + "!\n" + fact[n]);
        }
    }
}