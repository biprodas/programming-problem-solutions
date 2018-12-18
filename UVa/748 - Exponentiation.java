import java.io.*;
import java.util.*;
import java.math.*;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    while(sc.hasNext()){
	        double r = sc.nextDouble();
	        int n = sc.nextInt();
	        BigDecimal bd = BigDecimal.valueOf(r).pow(n).stripTrailingZeros();
	        String ans = bd.toPlainString();
	        if(ans.charAt(0)=='0') ans = ans.substring(1);
	        System.out.println(ans);
	    }
	}
}