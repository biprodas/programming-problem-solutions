import java.util.*;
import java.math.*;

class Main{
    static BigInteger[] fact = new BigInteger[367];
    static void preFacto(){
        fact[0] = BigInteger.ONE;
        for(int i=1; i < fact.length; i++){
            fact[i] = fact[i-1].multiply(new BigInteger(i+""));
        }
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        preFacto();
        int n;
        while((n = sc.nextInt()) != 0){
            String s = fact[n].toString();
            int[] freq = new int[10];
            for(int i=0; i<s.length(); i++){
                freq[s.charAt(i)-'0']++;
            }
            System.out.println(n+"! --");
            System.out.println("(0) " + freq[0] + " (1) " + freq[1] + " (2) " + freq[2] + " (3) " + freq[3] + " (4) " + freq[4]);
            System.out.println("(5) " + freq[5] + " (6) " + freq[6] + " (7) " + freq[7] + " (8) " + freq[8] + " (9) " + freq[9]);
        }
    }

}
