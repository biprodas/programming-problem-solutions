import java.util.*;
import java.math.*;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a, b, ans;
        while(sc.hasNext()){
            a = sc.nextBigInteger();
            String op = sc.next();
            b = sc.nextBigInteger();
            ans = (op.charAt(0) == '/') ? a.divide(b) : a.mod(b);
            System.out.println(ans);
        }
    }
}