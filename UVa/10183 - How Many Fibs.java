import java.util.*;
import java.math.*;

class Main{
    static BigInteger TEN = new BigInteger("10");
    static BigInteger ZERO = new BigInteger("0");
    static BigInteger ONE = new BigInteger("1");
    static BigInteger fib[] = new BigInteger[5003];

    static void preFibo(){
        fib[1] = ONE;
        fib[2] = ONE.add(ONE);
        for(int i=3; i<5003; i++){
            fib[i] = fib[i-1].add(fib[i-2]);
            if(fib[i].compareTo(TEN.pow(100))>0) break;
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        preFibo();
        while(true){
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            if(a.compareTo(ZERO)==0 && b.compareTo(ZERO)==0)
                break;
            int i=0, cnt = 0;
            while(fib[++i].compareTo(b)<=0){
                if(fib[i].compareTo(a)>=0) cnt++;
            }
            System.out.println(cnt);
        }
    }

}