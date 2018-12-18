import java.util.*;
import java.io.*;
import java.math.*;

public class PE_042 {
        public static boolean isTriangle(int n){
        	n*=2;
        	int x= (int)Math.sqrt(n);
            	return x*(x+1) == n;
        }

        public static int wordValue(String s){
            	int values=0, len= s.length();
            	for(int i=0;i<len;i++){
                	values += s.charAt(i)- 'A' + 1;
            	}
            	return values;
        }
        
	public static void main (String[] args) throws IOException {
	    	Scanner in = new Scanner(new File("words.txt")).useDelimiter("[\",]+");
            	int cnt=0;
            	while (in.hasNext()){
                	String s= in.next();
                	if(isTriangle(wordValue(s)))
				cnt++;
            	}
	    	System.out.println(cnt);
	}
}

/* Answer : 162 */