import java.io.*;
import java.util.*;

class PE_022 {
	public static void main(String[] args) throws IOException {
		Scanner in = new Scanner(new File("names.txt")).useDelimiter("[\",]+");
        	ArrayList<String> names = new ArrayList<String>();
           	while (in.hasNext()) names.add(in.next());
           	
	    	Collections.sort(names);

		int totalScores = 0;
		for(int i=0; i<names.size(); i++) {
			int scores = 0;
			String name = names.get(i);
			for(int j = 0; j < name.length(); j++)
				scores += name.charAt(j) - 'A' + 1;
			totalScores += scores * (i + 1);
		}
		System.out.println(totalScores);
	}
}

/* Answer : 871198282 */