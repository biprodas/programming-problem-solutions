import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    static BigInteger catalan[]=new BigInteger[1003];
    static void Catalan(){
        catalan[0] = catalan[1] = BigInteger.ONE;
        for(int i=2;i<1003;i++){
            catalan[i] = BigInteger.ZERO;
            for(int j=0;j<i;j++){
                catalan[i] = catalan[i].add(catalan[j].multiply(catalan[i-j-1]));
            }
        }
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Catalan();
        while(sc.hasNext()){
            int n = sc.nextInt();
            System.out.println(catalan[n]);
        }
    }
}