import java.io.*;
import java.util.*;
import java.math.*;

public class PE_036{
    public static void main(String[] args){
        int sum = 0;
        for(int i=1; i<1000000; i++) {
            if(isPalindrome(Integer.toString(i, 10)) && isPalindrome(Integer.toString(i, 2)))
                sum += i;
        }
        System.out.println(sum);
    }
    
    public static boolean isPalindrome(String str){
        return str.equals(new StringBuilder(str).reverse().toString());
    }
}

/* Answer : 872187 */