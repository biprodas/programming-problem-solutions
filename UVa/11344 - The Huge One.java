import java.util.*;
import java.math.*;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            BigInteger M = sc.nextBigInteger();
            int S = sc.nextInt();
            boolean wonderful = true;
            while(S-->0){
                int x = sc.nextInt();
                wonderful &= M.mod(BigInteger.valueOf(x)).compareTo(BigInteger.ZERO) == 0;
            }
            String ans = wonderful ? "Wonderful" : "Simple";
            System.out.printf("%s - %s.\n", M.toString(), ans);
        }
    }
}