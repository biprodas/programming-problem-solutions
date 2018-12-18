import java.util.*;
import java.math.*;

class Main{
    static BigInteger fib[] = new BigInteger[1003];
    
    static void preFibo(){
        fib[0] = BigInteger.ONE;
        fib[1] = new BigInteger("2");
        for(int i=2; i<1003; i++){
            fib[i] = fib[i-1].add(fib[i-2]);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        preFibo();
        while(sc.hasNext()){
            int n = sc.nextInt();
            System.out.println(fib[n]);
        }
    }
	
}