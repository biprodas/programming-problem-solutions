import java.util.*;
import java.math.*;

class Main{
    static BigInteger fib[] = new BigInteger[5003];
    
    static void preFibo(){
        fib[1] = BigInteger.ONE;
        fib[2] = BigInteger.ONE;
        for(int i=3; i<5003; i++){
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