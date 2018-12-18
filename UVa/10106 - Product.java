import java.math.BigInteger;
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            BigInteger x = sc.nextBigInteger();
            BigInteger y = sc.nextBigInteger();
            System.out.println(x.multiply(y));
        }
    }
}
