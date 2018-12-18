import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int from = sc.nextInt();
            int to = sc.nextInt();
            String s = sc.next();
            try{
                BigInteger n = new BigInteger(s, from);
                String ans = n.toString(to).toUpperCase();
                System.out.println(s + " base " + from + " = " + ans + " base " + to);
            } 
            catch(Exception e){
                System.out.println(s + " is an illegal base " + from + " number");
            }
        }
    }
}