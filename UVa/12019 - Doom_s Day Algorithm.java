import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar;

class Main{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    String[] week={"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	    Calendar cal = new GregorianCalendar();

	    int t = sc.nextInt();
            while(t-- > 0){
            	int m = sc.nextInt();
            	int d = sc.nextInt();
            	cal.set(2011, m-1, d);
            	String day = week[cal.get(Calendar.DAY_OF_WEEK)-1];
            	System.out.println(day);
	    }

	}
}
