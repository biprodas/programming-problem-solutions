import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar;

class Main{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    //Calendar cal = Calendar.getInstance();
		
		while(true){
		    int k = sc.nextInt();
		    int day = sc.nextInt();
		    int month = sc.nextInt();
		    int year = sc.nextInt();
		    if(k==0 && day==0 && month==0 && year==0) break;
		    
		    Calendar cal = new GregorianCalendar(year, month-1, day);
		    //cal.set(year, month-1, day);
		    cal.add(Calendar.DATE, k);

		    int y = cal.get(Calendar.YEAR);
		    int m = cal.get(Calendar.MONTH);
		    int d = cal.get(Calendar.DATE);
			
		    System.out.println(d+" "+(m+1)+" "+y);
		}

	}	
}
