import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int cs = 0;
        while(true){
            int n = sc.nextInt();
            int f = sc.nextInt();
            if(n==0 && f==0) break;
            BigInteger sum = BigInteger.ZERO;
            for(int i=0;i<n;i++){
                sum = sum.add(sc.nextBigInteger());
            }
            BigInteger av = sum.divide(BigInteger.valueOf(f));
            System.out.println("Bill #"+(++cs)+" costs "+sum+": each friend should pay "+av+"\n");
        }
    }
}